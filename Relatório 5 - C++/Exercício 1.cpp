#include <iostream>
using namespace std;

int combinar_equipes(int n)
{
    if(n == 0)
        return 0;

    else if(n == 1)
        return 1;

    return combinar_equipes(n - 1) + combinar_equipes(n - 2);       
}

int main() 
{
    cout << "Digite o tamanho do chaveamento (n): ";

    int n;
    cin >> n;

    cout << "\nTotal de cenários de confrontos possíveis: " << combinar_equipes(n);
    

    return 0;
}
