package main
import "fmt"

func ValidarCodigoRastreio(codigo string) (bool, string) {
    if len(codigo) == 10 {
        return true, "Codigo de rastreio registrado no sistema!"
    } else {
        return false, "Erro! O código de rastreio deve ter exatamente 10 caracteres."
    }
}

func main() {
    var status bool
    var codigo string
    var retorno string

    for !status {
        fmt.Printf("Digite o codigo de rastreio: ")
        fmt.Scanln(&codigo)

        status, retorno = ValidarCodigoRastreio(codigo)
        fmt.Println(retorno)
    }
}
