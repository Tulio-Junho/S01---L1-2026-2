package main
import "fmt"

func gerarEscalaPlantao(n int) {
	
	fmt.Println("Escala de Plantão Técnico") 

	for i := 0; i < n; i++ {
		
		dia := 1 + (i)*4

		fmt.Printf("Plantão %d: Dia %d do mês\n", i+1, dia)
	}
}

func main() {
	var n int

	fmt.Print("Digite a quantidade de plantões necessários: ")
	fmt.Scan(&n)

	gerarEscalaPlantao(n)
}
