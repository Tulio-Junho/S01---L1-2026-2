use std::io;

fn calcular_pontuacao(prova1: f64, prova2: f64, redacao: f64) -> f64
{
    let NPT: f64 = ((prova1 + prova2) / 2.0);
    let PF: f64 = (0.6 * NPT + 0.4 * redacao);

    if PF >= 60.0
    {
        println!("Parabens! Candidato aprovado no processo seletivo.!");
        println!("Pontuacao final: {}", PF);
    }

    else
    {
        println!("Infelizmente o candidato nao atingiu a meta minima para aprovacao.");
        println!("Pontuacao final: {}", PF);
    }

    return PF;

}

fn main()
{
    println!("Digite a nota da prova teorica 1: ");
    
    let mut primeira = String::new();
    io::stdin().read_line(&mut primeira).expect("Erro ao ler");

    let primeira: f64 = primeira.trim().parse().unwrap();

    println!("Digite a nota da prova teorica 2: ");
    
    let mut segunda = String::new();
    io::stdin().read_line(&mut segunda).expect("Erro ao ler");

    let segunda: f64 = segunda.trim().parse().unwrap();

    println!("Digite a nota da redacao: ");
    
    let mut redacao = String::new();
    io::stdin().read_line(&mut redacao).expect("Erro ao ler");

    let redacao: f64 = redacao.trim().parse().unwrap();

   calcular_pontuacao(primeira, segunda, redacao); 

}
