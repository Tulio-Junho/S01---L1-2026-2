import java.util.ArrayList;

abstract class Monstro {
    private String nome;

    public Monstro(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public abstract String receita();
}

class Slime extends Monstro {
    public Slime(String nome) {
        super(nome);
    }

    @Override
    public String receita() {
        return "Ferver o slime e preparar uma gelatina.";
    }
}

class Mandragora extends Monstro {
    public Mandragora(String nome) {
        super(nome);
    }

    @Override
    public String receita() {
        return "Cozinhar a mandragora e preparar uma sopa.";
    }
}

class Panela {
    private String material;

    public Panela(String material) {
        this.material = material;
    }

    public String getMaterial() {
        return material;
    }
}

class Cozinheiro {
    private String nome;
    private Panela panela;
    private ArrayList<Monstro> ingredientes;

    public Cozinheiro(String nome, String materialDaPanela) {
        this.nome = nome;

        // Composicao: o cozinheiro cria sua propria panela.
        this.panela = new Panela(materialDaPanela);

        // Agregacao: os monstros existem independentemente
        // do cozinheiro e sao recebidos ja criados.
        this.ingredientes = new ArrayList<>();
    }

    public void adicionarIngrediente(Monstro monstro) {
        ingredientes.add(monstro);
    }

    public void servirBanquete() {
        System.out.println("Cozinheiro: " + nome);
        System.out.println("Panela de: " + panela.getMaterial());

        for (Monstro monstro : ingredientes) {
            System.out.println("Ingrediente: " + monstro.getNome());
            System.out.println("Receita: " + monstro.receita());
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Slime slime = new Slime("Slime Azul");
        Mandragora mandragora = new Mandragora("Mandragora Selvagem");

        Cozinheiro cozinheiro = new Cozinheiro("Senshi", "Ferro");

        cozinheiro.adicionarIngrediente(slime);
        cozinheiro.adicionarIngrediente(mandragora);

        cozinheiro.servirBanquete();
    }
}
