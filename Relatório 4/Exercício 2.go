package main
import "fmt"

func main() {
	var vendas1, vendas2, vendas3 int

	fmt.Print("Digite as vendas do primeiro trimestre: ")
	fmt.Scan(&vendas1)

	fmt.Print("\nDigite as vendas do segundo trimestre: ")
	fmt.Scan(&vendas2)

	fmt.Print("\nDigite as vendas do terceiro trimestre: \n")
	fmt.Scan(&vendas3)

	total := vendas1 + vendas2 + vendas3

	if total < 100 {

		fmt.Println("Meta mínima anual não atingida!")

	} else {

		fmt.Printf("Total de vendas: %d unidades\n", total)

		switch {
		case total >= 250:
			fmt.Println("Classificação: Categoria Top Seller")

		case total >= 180:
			fmt.Println("Classificação: Categoria Sênior")

		case total >= 100:
			fmt.Println("Classificação: Categoria Pleno")
		}
	}
}
