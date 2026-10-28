class FichaDeCriatura {
    constructor(criatura, nivelDePerigo) {
        this.criatura = criatura;
        this.nivelDePerigo = nivelDePerigo;
    }

    descrever() {
        return `Criatura: ${this.criatura} | Nível de perigo: ${this.nivelDePerigo}`;
    }
}

class DiarioMisterioso {
    #fichas = [];

    constructor(numero) {
        this.numero = numero;
    }

    anotar(criatura, nivelDePerigo) {
        const ficha = new FichaDeCriatura(criatura, nivelDePerigo);
        this.#fichas.push(ficha);
    }

    exibirFichas() {
        console.log(`\n--- Diário ${this.numero} ---`);
        this.#fichas.forEach(f => console.log(f.descrever()));
    }
}

class Funcionario {
    constructor(nome, cargo) {
        this.nome = nome;
        this.cargo = cargo;
    }
}

class CabanaDoMisterio {
    #funcionarios = [];

    constructor(dono) {
        this.dono = dono;
    }

    contratar(funcionario) {
        this.#funcionarios.push(funcionario);
    }

    abrirAsPortas() {
        console.log(`\n--- Cabana do Mistério do(a) ${this.dono} está aberta! ---`);
        this.#funcionarios.forEach(f => console.log(`${f.nome} - ${f.cargo}`));
    }
}

// MAIN
const diario = new DiarioMisterioso(3);
diario.anotar('Gnomos', 'Médio');
diario.anotar('Multi-Urso', 'Alto');
diario.anotar('Zumbis', 'Baixo');
diario.exibirFichas();

const soos  = new Funcionario('Soos', 'Faz-tudo');
const wendy = new Funcionario('Wendy', 'Caixa');

const cabana = new CabanaDoMisterio('Tio Stan');
cabana.contratar(soos);
cabana.contratar(wendy);
cabana.abrirAsPortas();


// Composição: as Fichas de criatura são criadas dentro do DiarioMisterioso no método anotar.
// Elas só existem por causa do diário, se o diário deixar de existir as fichas somem junto.
// Agregação: Soos e Wendy foram criados fora da cabana e só depois entregues pra ela no método contratar.
// Eles já existiam antes e continuam existindo se a cabana fechar.
