#include <iostream>
using namespace std;

class Banda 
{
    public:
        string nome; 
        int integrantes;
        float PotSom;
        int energia;

        void duelar(Banda &alvo)
        {
            alvo.energia -= PotSom;
        }
};


int main() 
{

    Banda banda1;
    Banda banda2;

    banda1.nome = "Banda do Joca";
    banda1.integrantes = 4;
    banda1.PotSom = 35;
    banda1.energia = 1000;

    banda2.nome = "Banda do Bocao";
    banda2.integrantes = 8;
    banda2.PotSom = 21;
    banda2.energia = 42;

    banda1.duelar(banda2);

    cout << "=== Banda 1 ===" << endl;
    cout << "Nome da Banda: " << banda1.nome << endl;
    cout << "Numero de Integrantes: " << banda1.integrantes << endl;
    cout << "Potencia do Som: " << banda1.PotSom << endl;
    cout << "Energia: " << banda1.energia << endl;

    cout << "\n=== Banda 2 ===" << endl;
    cout << "Nome da Banda: " << banda2.nome << endl;
    cout << "Numero de Integrantes: " << banda2.integrantes << endl;
    cout << "Potencia do Som: " << banda2.PotSom << endl;
    cout << "Energia: " << banda2.energia << endl;

  
    return 0;
}
