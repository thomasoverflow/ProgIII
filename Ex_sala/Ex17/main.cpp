#include <iostream>
#include <string>

// Defina classe Alimento, AlimentoSolido, e Bebida
class Alimento{
protected:
    std::string nome;
    int calorias;

public:
    Alimento(std::string pnome, int pcalorias): nome(pnome), calorias(pcalorias){}
};

class AlimentoSolido: public Alimento{
    int gramas;

public:
    AlimentoSolido(std::string pnome, int pcalorias, int pgramas): Alimento(pnome, pcalorias), gramas(pgramas){}
    void info(){
        std::cout << "O alimento sólido " << nome << " tem " << calorias/gramas << " calorias por grama\n";
    }

};
class Bebida: public Alimento{
    float litros;

public:
    Bebida(std::string pnome, int pcalorias, float plitros): Alimento(pnome, pcalorias), litros(plitros){}
    void info(){
        std::cout << "A bebida " << nome << " tem " << calorias/litros << " calorias por litro\n";
    }
};

// Main - Não modificar
int main(){
    Bebida agua("Agua", 0, 1);
    agua.info();

    AlimentoSolido arroz("Arroz", 130, 100);
    arroz.info();

    if (std::is_base_of<Alimento, AlimentoSolido>::value)
    {
        std::cout << "AlimentoSolido é um Alimento" << std::endl;
    }

    if (std::is_base_of<Alimento, Bebida>::value)
    {
        std::cout << "Bebida é um Alimento" << std::endl;
    }
}