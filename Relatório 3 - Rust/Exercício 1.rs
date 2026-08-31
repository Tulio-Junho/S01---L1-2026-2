use std::io;

fn validar_placa(placa: &str) -> bool
{
    let comprimento = placa.chars().count() >= 7;
    let maiuscula = placa.chars().filter(|c| c.is_ascii_uppercase()).count() >= 4;
    let numero = placa.chars().filter(|c| c.is_numeric()).count() >= 2;

    comprimento && maiuscula && numero
}

fn main()
{

    loop
    {
        println!("Insira a placa do veiculo:");

        let mut placa = String::new();
        io::stdin().read_line(&mut placa).expect("Erro ao ler");

        let placa = placa.trim();

        if validar_placa(placa)
        {
            println!("Placa cadastrada ao sistema");
            break;
        }

        else
        {
            println!("Placa invalida! Tente Novamente");
            
        }
    }
}
