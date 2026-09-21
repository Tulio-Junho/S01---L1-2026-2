#include <iostream>
using namespace std;

class Robo 
{
    public:
        string modelo; 
        int versao;
        float PotLaser;
        int integridade;

        void disparar(Robo &alvo)
        {
            alvo.integridade -= PotLaser;
        }
};


int main() 
{

    // No exercício não está pedindo que atribua dinamicamente, então atribui estaticamente mesmo :P

    Robo robo1;
    Robo robo2;

    robo1.modelo = "Vasco";
    robo1.versao = 1898;
    robo1.PotLaser = 35;
    robo1.integridade = 1000;

    // Acredito que neste exercício a integridade também deveria ser float, já que o dano é.

    robo2.modelo = "Bobao";
    robo2.versao = 2019;
    robo2.PotLaser = 2;
    robo2.integridade = 42;

    robo1.disparar(robo2);


    cout << "=== Robo 1 ===" << endl;
    cout << "Modelo: " << robo1.modelo << endl;
    cout << "Versao: " << robo1.versao << endl;
    cout << "Potencia do laser: " << robo1.PotLaser << endl;
    cout << "Integridade: " << robo1.integridade << endl;

    cout << "\n=== Robo 2 ===" << endl;
    cout << "Modelo: " << robo2.modelo << endl;
    cout << "Versao: " << robo2.versao << endl;
    cout << "Potencia do laser: " << robo2.PotLaser << endl;
    cout << "Integridade: " << robo2.integridade << endl;

  
    return 0;
}
