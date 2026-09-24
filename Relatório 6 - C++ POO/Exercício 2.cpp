#include <iostream>
using namespace std;

class LinkSocial
{
    private:
        string nome;
        string arcana;
        int rank;
    
    public:
        string getnome()
        {
            return nome;
        }

        void setnome(string novo)
        {
            nome = novo;
        }

        string getarcana()
        {
            return arcana;
        }

        void setarcana(string novo)
        {
            arcana = novo;
        }

        int getrank()
        {
            return rank;
        }

        void setrank(int novo)
        {
            rank = novo;
        }

        void subirRank()
        {
            rank++;
        }

};

int main() 
{
    LinkSocial lk;
    string nome;
    string arcana;

    cout << "Insira um nome para seu personagem:\n";
    getline(cin >> ws, nome);
    lk.setnome(nome);

    cout << "Insira um nome para arcana\n";
    getline(cin >> ws, arcana);
    lk.setarcana(arcana);

    lk.setrank(1);

    lk.subirRank();

    cout << "\n==RESULTADO==" << endl;
    cout << "Nome do personagem: " << lk.getnome() << endl;
    cout << "Arcana: " << lk.getarcana() << endl;
    cout << "Rank: " << lk.getrank(); 
}
