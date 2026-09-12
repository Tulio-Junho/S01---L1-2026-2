#include <iostream>
using namespace std;

int main()
{

    int matriz_solar[5][5];
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
            matriz_solar[i][j] = 0;
    }

    int resposta = -1;
    int fileira; 
    int coluna;

    do
    {
        cout << "=== TELEMETRIA DO PAINEL SOLAR ===" << endl;
        cout << "1. Ativar Celula" << endl;
        cout << "2. Ver Mapa da Matriz" << endl;
        cout << "3. Sair" << endl;
        cout << "Escolha uma opcao: \n" << endl;

        cin >> resposta;

        switch(resposta)
        {
            case 1:
                
                cout << "Digite a fileira(0 a 4): ";
                cin >> fileira;
                cout << "\nDigite a coluna(0 a 4): " << endl;
                cin >> coluna;

                if(matriz_solar[fileira][coluna] == 1)
                {
                    cout << "Erro: Celula solar ja esta em operacao!\n" << endl;
                }

                else
                {
                    matriz_solar[fileira][coluna] = 1;
                    cout << "Sucesso: Celula solar ativada!\n" << endl;
                }

                break;

            case 2:

                cout << "--- Mapa da Matriz Solar\n" << endl;

                for(int i = 0; i < 5; i++)
                {
                    for(int j = 0; j < 5; j++)
                    {
                        cout << "[" << matriz_solar[i][j] << "] ";
                    }

                    cout << endl << endl;
                }

                break;

            case 3: 


                break;

            default:
                cout << "Opcao invalida. Tente Novamente" << endl;
                break;   
        }


    }while(resposta != 3);

    int ativa = 0;
    int nativa = 0;

    cout << "=== RELATORIO FINAL DE OPERACAO ===" << endl;

    for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(matriz_solar[i][j] == 1) 
                    ativa++;

                else  
                    nativa++;    

            }
        }

    cout << "Total de celulas ATIVAS: " << ativa << endl;
    cout << "Total de celulas INATIVAS: " << nativa << endl;
    cout << "Capacidade Operacional: " << (((float)ativa / 25) * 100) << "%" << endl;

    return 0;
}
