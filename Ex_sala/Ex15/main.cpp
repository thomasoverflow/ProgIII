#include <iostream>
#include <string>

// Defina classe Pessoa e Aluno
class Pessoa{
protected:
    std::string nome;
public:
    Pessoa(std::string pnome){
        nome = pnome;
    }
    std::string getNome(){
        return nome;
    }
    ~Pessoa(){}
};


class Aluno : public Pessoa{
    int matricula;
public:
    Aluno(std::string pnome, int pmatricula): Pessoa(pnome), matricula(pmatricula){};
    void info(){
        std::cout << "Aluno " << nome << " tem matrícula " << matricula << std::endl;
    }
    ~Aluno(){}
};


// Main - Não modificar
int main(){
    Aluno joao("João", 1);
    joao.info();
    if (std::is_base_of<Pessoa, Aluno>::value)
    {
        std::cout << joao.getNome() << " é uma pessoa" << std::endl;
    }
}