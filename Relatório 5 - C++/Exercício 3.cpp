#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    cout << "Informe a capacidade maxima de carga do drone (kg): \n" << endl;
    
    float cap;
    cin >> cap;

    float carga = 0.0;
    float pacote;
    int resposta = -1;

    do
    {
      
        cout << "=== SISTEMA DE CARGA DO DRONE ===" << endl;
        cout << "1. Verificar Carga" << endl;
        cout << "2. Carregar Pacote" << endl;
        cout << "3. Descarregar Pacote" << endl;
        cout << "4. Encerrar Operacao" << endl;

        cout << "\nEscolha uma operacao: " << endl;

        cin >> resposta;

        cout << fixed << setprecision(2);

        switch(resposta)
        {
            case 1:

                cout << "Carga Atual: " << carga << " kg / " << cap << " kg" << endl;
                cout << "Espaco Disponivel: " << cap - carga << " kg\n" << endl;

                break;

            case 2:

                cout << "Digite o peso do pacote a ser carregado (kg): ";
                cin >> pacote;

                if(pacote + carga > cap)
                {
                    cout << "\nAlerta: Peso maximo de decolagem excedido! Operacao cancelada.\n" << endl;
                    break;
                }    

                else
                {
                    cout << "\nPacote adicionado com sucesso!\n" << endl;
                    carga = carga + pacote;
                    break;
                }

            case 3:

                cout << "Digite o peso do pacote a ser descarregado (kg): ";
                cin >> pacote;
                
                if(pacote > carga)
                {
                    cout << "\nAlerta: Voce nao pode descarregar mais peso do que tem disponivel! Operacao cancelada.\n" << endl;
                    break;
                }

                else
                {
                    cout << "\nPacote descarregado com sucesso!\n" << endl;
                    carga = carga - pacote;
                    break;
                }

            case 4:

                cout << "Encerrando sistema de telemetria.\n" << endl;
                break;

            default:

                cout << "Opcao invalida. Tente Novamente\n" << endl;

        }



    } while(resposta != 4);

    return 0;
}
