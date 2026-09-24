#include <iostream>
using namespace std;

class MembroInatel
{
    protected:
    string nome;

    public:
        virtual void seApresentar()
        {
            cout << "apresentacao" << endl;
        }

        MembroInatel(string novo)
        {
            nome = novo;
        }
};

class Aluno : public MembroInatel
{
    private:
        string curso;

    public:  
        Aluno(string nome) : MembroInatel(nome) {}

        string getcurso()
        {
            return curso;
        }

        void setcurso(string c)
        {
            curso = c;
        }

        void seApresentar() override
        {
            cout << "Meu nome e " << nome << " e estudo no curso de " << curso << endl;
        }
};

class Professor : public MembroInatel
{
    private:
        string disciplina;

    public:
        Professor(string nome) : MembroInatel(nome) {}

        string getdisciplina()
        {
            return disciplina;
        }

        void setdisciplina(string d)
        {
            disciplina = d;
        }

        void seApresentar() override
        {
            cout << "Meu nome e " << nome << " e leciono a disciplina de " << disciplina << endl;
        }
};


int main()
{

    Aluno aluno("Tulio");
    Professor prof("Mosca");

    aluno.setcurso("Engenharia de Software");
    prof.setdisciplina("Linguagens de Programacao e Compiladores");

    aluno.seApresentar();
    prof.seApresentar();

    return 0;
}
