#include <iostream>
using namespace std;

float calcular_confiabilidade_sistema(float probabilidades[], int tamanho)
{
    float var = 1;

    for(int i = 0; i < tamanho; i++)
    {
        var = var * probabilidades[i];
    }

    return var;
}

int main() 
{
    int N;

    cout << "Digite a quantidade de componentes do sistema: " << endl;
    cin >> N;

    float vetor[N];

    for(int i = 0; i < N; i++)
    {
        cout << "Digite a probabilidade do componente " << i  << ":" << endl;
        cin >> vetor[i];
    }

    float resultado = calcular_confiabilidade_sistema(vetor, N);

    cout << "Confiabilidade total do sistema: " << resultado << " (" << resultado * 100 << "%)"; 


    return 0;
}
