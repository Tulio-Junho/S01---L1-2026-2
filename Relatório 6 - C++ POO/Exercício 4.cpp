#include <iostream>
#include <list>
using namespace std;

class Hobbit
{
    protected: 
        string nome;

    public:
        Hobbit(string novo)
        {
            nome = novo;
        }

        virtual void fazerAtividade()
        {
            cout << "O Hobbit " << nome << " esta aproveitando um dia tranquilo na Comarca." << endl;
        }


        virtual ~Hobbit() {}
};

class Jardineiro : public Hobbit
{
    public:
        Jardineiro(string nome) : Hobbit(nome) {}

        void fazerAtividade() override
        {
            cout << "O Jardineiro " << nome << " esta cuidando das flores e plantas ao redor das tocas!" << endl;
        }
};

class Cozinheiro : public Hobbit
{
    public:
        Cozinheiro(string nome) : Hobbit(nome) {}

        void fazerAtividade() override
        {
            cout << "O Cozinheiro " << nome << " esta preparando o segundo cafe da manha para os convidados!" << endl;
        }
};

class Fazendeiro : public Hobbit
{
    public:
        Fazendeiro(string nome) : Hobbit(nome) {}

        void fazerAtividade() override
        {
            cout << "O Fazendeiro " << nome << " esta colhendo vegetais e hortalicas em suas terras!" << endl;
        }
};

int main()
{

    list<Hobbit*> hobbits;

    hobbits.push_back(new Jardineiro("Sam"));
    hobbits.push_back(new Cozinheiro("Pippin"));
    hobbits.push_back(new Fazendeiro("Merry"));

    for(Hobbit* hobbit : hobbits)
    {
        hobbit -> fazerAtividade();
    }

    for (Hobbit* hobbit : hobbits) {
        delete hobbit;
    }

    return 0;
}
