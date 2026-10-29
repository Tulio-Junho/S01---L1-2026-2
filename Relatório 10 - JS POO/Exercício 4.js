class UsuarioDeNen {
    constructor(nome) {
        this.nome = nome;
    }

    atacar(alvo) {
        console.log(`${this.nome} lança um ataque genérico de aura contra ${alvo.nome}!`);
    }
}

class Intensificador extends UsuarioDeNen {
    atacar(alvo) {
        console.log(`${this.nome} reforça o punho com aura e acerta ${alvo.nome} com um soco devastador!`);
    }
}

class Transmutador extends UsuarioDeNen {
    atacar(alvo) {
        console.log(`${this.nome} transforma a aura em eletricidade e descarrega em ${alvo.nome}!`);
    }
}

class Materializador extends UsuarioDeNen {
    atacar(alvo) {
        console.log(`${this.nome} materializa uma lâmina de aura e corta ${alvo.nome}!`);
    }
}

class Aranha {
    constructor(nome, numero) {
        this.nome = nome;
        this.numero = numero;
    }
}

class TrupeFantasma {
    #aranhas;

    constructor(cidade, aranhas = []) {
        this.cidade = cidade;
        this.#aranhas = aranhas;
    }

    revelarAranhas() {
        console.log(`\n--- Aranhas avistadas em ${this.cidade} ---`);
        this.#aranhas.forEach(a => console.log(`Nº ${a.numero} - ${a.nome}`));
    }

    buscarAranha(numero) {
        return this.#aranhas.find(a => a.numero === numero);
    }
}


const feitan = new Aranha('Feitan', 2);
const phinks = new Aranha('Phinks', 5);

const trupe = new TrupeFantasma('Yorknew City', [feitan, phinks]);
trupe.revelarAranhas();

const alvo = trupe.buscarAranha(5);
console.log(`\nAlvo encontrado: ${alvo.nome}\n`);

const hunters = [
    new Intensificador('Gon'),
    new Transmutador('Killua'),
    new Materializador('Kurapika')
];

hunters.forEach(h => h.atacar(alvo));
