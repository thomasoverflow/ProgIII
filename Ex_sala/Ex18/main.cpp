#include <iostream>
#include <string>

// Declare classes aqui
class ComponenteEletronico{
protected:
    int simbolo;
    float resistencia;
    float corrente;
    float tensao;

public:
    ComponenteEletronico(int psimbolo, float presistencia, float pcorrente, float ptensao){
        simbolo = psimbolo;
        resistencia = presistencia;
        corrente = pcorrente;
        tensao = ptensao;
    }
    float Potencia(){
        return tensao*corrente;
    }
};

class Resistor: public ComponenteEletronico{
public:
    Resistor(int psimbolo, float presistencia, float pcorrente, float ptensao): ComponenteEletronico(psimbolo, presistencia, pcorrente, ptensao) {}
};

class Capacitor: public ComponenteEletronico{
    float capacitancia;

public:
    Capacitor(int psimbolo, float presistencia, float pcorrente, float ptensao, float pcapacitancia): ComponenteEletronico(psimbolo, presistencia, pcorrente, ptensao), capacitancia(pcapacitancia) {}
};

class Diodo: public ComponenteEletronico{
    int anodo, catodo;

public:
    Diodo(int psimbolo, float presistencia, float pcorrente, float ptensao, int panodo, int pcatodo): ComponenteEletronico(psimbolo, presistencia, pcorrente, ptensao), anodo(panodo), catodo(pcatodo) {}
};

class LED: public Diodo {
    std::string cor;

public:
    LED(int psimbolo, float presistencia, float pcorrente, float ptensao, int panodo, int pcatodo,std::string pcor): Diodo(psimbolo, presistencia, pcorrente, ptensao, panodo, pcatodo), cor(pcor) {}
};

int main(){
    Resistor res(0, 500, 1, 220);
    Capacitor cap(1, 0, 0, 220, 500);
    LED led_azul(1, 0, 1, 220, 0, 1, "azul");
    std::cout << led_azul.Potencia() << std::endl;

    if (std::is_base_of<ComponenteEletronico, LED>::value)
    {
        std::cout << "LED é um ComponenteEletronico" << std::endl;
    }

    if (std::is_base_of<Diodo, LED>::value)
    {
        std::cout << "LED é um Diodo" << std::endl;
    }
}