#include <iostream>

class ObjetoCubo{
    float lado;
public:
    ObjetoCubo(float plado): lado(plado){}
    float calcular_volume(){
        return lado*lado*lado;
    }
};

class ObjetoEsfera{
    float raio;
public:
    ObjetoEsfera(float praio): raio(praio){}
    float calcular_volume(){
        return 4.0/3.0 * 3.14 * raio * raio * raio;
    }
};

class ObjetoMetal{
public:
    std::string aparencia(){
        return "metálico";
    }
};

class ObjetoVidro{
public:
    std::string aparencia(){
        return "transparente";
    }
};

class CuboVidro: public ObjetoCubo, public ObjetoVidro{
public:
    CuboVidro(float plado): ObjetoCubo(plado), ObjetoVidro(){}
    void info(){
        std::cout << "Objeto de volume " << calcular_volume() << " e de aparência " << aparencia() << std::endl;
    }
};

class EsferaMetal: public ObjetoEsfera, public ObjetoMetal{
public:
    EsferaMetal(float praio): ObjetoEsfera(praio){}
    void info(){
        std::cout << "Objeto de volume " << calcular_volume() << " e de aparência " << aparencia() << std::endl;
    }
};

class EsferaVidro: public ObjetoEsfera, public ObjetoVidro{
public:
    EsferaVidro(float praio): ObjetoEsfera(praio){}
    void info(){
        std::cout << "Objeto de volume " << calcular_volume() << " e de aparência " << aparencia() << std::endl;
    }
};

int main(){
    CuboVidro Thomas(5);
    EsferaMetal Vanessa(10);
    EsferaVidro Vinicius(5);

    Thomas.info();
    Vanessa.info();
    Vinicius.info();
}