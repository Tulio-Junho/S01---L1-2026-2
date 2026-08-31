use std::io;

fn acertou_o_alvo(palpite:   i32, numero: i32) -> bool
{
    if (palpite - numero).abs() <= 5  
    {
        true
    }

    else
    {
        false
    }
}

fn main()
{
    let num: i32 = 10;

    loop
    {
        println!("Digite seu palpite:");

        let mut palpite = String::new();

        io::stdin().read_line(&mut palpite).expect("Erro ao ler");

        let palpite: i32 = palpite.trim().parse().expect("Digite um numero:");

    
        let distancia = (palpite - num).abs();

        if acertou_o_alvo(palpite, num)
        {
            println!("Parabens, voce acertou! Ficou apenas a {} unidades do numero secreto {}", distancia, num);
            break;
        }

        else
        {
            println!("Passou longe. Tente novamente.")
        }
        
    }
}
