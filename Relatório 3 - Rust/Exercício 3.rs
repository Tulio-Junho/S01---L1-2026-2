use std::io;

fn imprimir_terminados_em(digito: i32, limite_inferior: i32, limite_superior: i32)
{
    for i in limite_inferior..=limite_superior
    {
        if i % 10 == digito
        {
            println!("{}", i);
        }

    }
}

fn main()
{
    println!("Digite o digito final desejado (0 a 9): ");
    
    let mut desejado = String::new();
    io::stdin().read_line(&mut desejado).expect("Erro ao ler");

    let desejado: i32 = desejado.trim().parse().unwrap();

    println!("Digite o limite inferior: ");
    let mut inferior = String::new();
    io::stdin().read_line(&mut inferior).expect("Erro ao ler");

    let inferior: i32 = inferior.trim().parse().unwrap();

    println!("Digite o limite superior: ");
    let mut superior = String::new();
    io::stdin().read_line(&mut superior).expect("Erro ao ler");

    let superior: i32 = superior.trim().parse().unwrap();

    println!("Numeros no intervalo terminados em {} ", desejado);
    imprimir_terminados_em(desejado, inferior, superior); 

}
