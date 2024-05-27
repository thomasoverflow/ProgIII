#include <iostream>
#include <string>

//Defina as classes
class ObjetoCeleste{
    std::string nome;
    float peso;

public:
    ObjetoCeleste(std::string pnome, float ppeso): nome(pnome), peso(ppeso) {}
    void info(){
        std::cout<< "Objeto " << nome << " tem peso " << peso << std::endl;
    }
};
class Estrela: public ObjetoCeleste{
    float brilho;

public:
    Estrela(std::string pnome, float ppeso, float pbrilho): ObjetoCeleste(pnome,ppeso), brilho(pbrilho){}
};

class Planeta: public ObjetoCeleste{
    int sequencia;

public:
    Planeta(std::string pnome, float ppeso, int pseq): ObjetoCeleste(pnome, ppeso), sequencia(pseq){}
};

//Main
int main(){
    // Instancie os objetos e chame info().
    Planeta Terra("Terra", 6e24, 3);
    Estrela Sol("Sol", 2e30, 100000);
    ObjetoCeleste Meteoro("Meteoro", 1000);

    Terra.info();
    Sol.info();
    Meteoro.info();
    // Não modificar abaixo
    if (!std::is_base_of<ObjetoCeleste, Estrela>::value){
        std::cout << "Erro: Estrela não é um objeto celeste\n";
    }
    if (!std::is_base_of<ObjetoCeleste, Planeta>::value){
        std::cout << "Erro: Planeta não é um objeto celeste\n";
    }
}