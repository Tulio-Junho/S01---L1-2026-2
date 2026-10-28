class Pistola {
    constructor(modelo) {
        this.modelo = modelo;
    }
}

class AgenteProtocolo {
    #pistola;

    constructor(codinome, modeloDaPistola) {
        this.codinome = codinome;
        this.#pistola = new Pistola(modeloDaPistola);
    }

    usarHabilidade() {
        throw new Error(`O agente ${this.codinome} deve implementar o método 'usarHabilidade()'`);
    }

    entrarEmCombate() {
        console.log(`${this.codinome} | Pistola: ${this.#pistola.modelo} | ${this.usarHabilidade()}`);
    }
}

class Controlador extends AgenteProtocolo {
    usarHabilidade() {
        return 'Lança uma cortina de fumaça para bloquear a visão do inimigo.';
    }
}

class Iniciador extends AgenteProtocolo {
    usarHabilidade() {
        return 'Dispara um drone que revela a posição dos inimigos.';
    }
}

class Duelista extends AgenteProtocolo {
    usarHabilidade() {
        return 'Avança com um dash e abre espaço para o time.';
    }
}

class Esquadrao {
    #agentes;

    constructor(nome, agentes) {
        this.nome = nome;
        this.#agentes = agentes;
    }

    iniciarPartida() {
        console.log(`\n--- ${this.nome} INICIA A PARTIDA! ---`);
        this.#agentes.forEach(a => a.entrarEmCombate());
    }

    listarControladores() {
        return this.#agentes.filter(a => a instanceof Controlador);
    }
}


const omen   = new Controlador('Omen','Ghost');
const brim   = new Controlador('Brimstone','Sheriff');
const sova   = new Iniciador('Sova','Classic');
const jett   = new Duelista('Jett','Frenzy');

const esquadrao = new Esquadrao('Protocolo Alpha', [omen, brim, sova, jett]);

esquadrao.iniciarPartida();

console.log('\nControladores:');
esquadrao.listarControladores().forEach(c => console.log(`- ${c.codinome}`));

// item 8: o objeto é criado, mas a chamada lança o erro
// const agente = new AgenteProtocolo('Teste', 'Classic');
// agente.entrarEmCombate();
