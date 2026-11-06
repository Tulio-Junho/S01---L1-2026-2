import java.util.HashMap;

interface Sobrenatural {
    void manifestar();
}

class Alienigena implements Sobrenatural {
    private String nome;

    public Alienigena(String nome) {
        this.nome = nome;
    }

    @Override
    public void manifestar() {
       System.out.println(nome + " apareceu e esta usando poderes alienigenas!");
    }
}

class EspiritoYoukai implements Sobrenatural {
    private String nome;

    public EspiritoYoukai(String nome) {
        this.nome = nome;
    }

    @Override
    public void manifestar() {
        System.out.println(nome + " apareceu e esta assombrando o local!");
    }
}

class MapaDeAvistamentos {
    private HashMap<String, Sobrenatural> avistamentos;

    public MapaDeAvistamentos() {
        avistamentos = new HashMap<>();
    }

    public void registrar(String local, Sobrenatural ser) {
        avistamentos.put(local, ser);
    }

    public void investigar(String local) {
        Sobrenatural ser = avistamentos.get(local);

        if (ser == null) {
            System.out.println(local + " esta tranquilo.");
        } else {
            ser.manifestar();
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Alienigena alienigena = new Alienigena("Serpo");
        EspiritoYoukai espirito = new EspiritoYoukai("Turbo Vovo");

        MapaDeAvistamentos mapa = new MapaDeAvistamentos();

        mapa.registrar("Escola", alienigena);
        mapa.registrar("Tunel", espirito);

        mapa.investigar("Escola");
        mapa.investigar("Tunel");
        mapa.investigar("Parque");
    }
}
