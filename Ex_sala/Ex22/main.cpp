#include <iostream>
#include <vector>


class FormaGeometrica{
public:
    virtual float getArea() = 0;
    virtual ~FormaGeometrica();
};

class Circulo : public FormaGeometrica{
    float raio;
public:
    Circulo(float praio): raio(praio), FormaGeometrica(){}
    float getArea(float raio){
        return(3.14*raio*raio);
    }
};

class Quadrado : public FormaGeometrica{
    float lado;
public:
    Quadrado(float plado): lado(plado), FormaGeometrica(){}
    float getArea(float lado){
        return(lado*lado);
    }
};

class Triangulo : public FormaGeometrica{
    float base, altura;
public:
    Triangulo(float pbase, float paltura): base(pbase), altura(paltura), FormaGeometrica(){}
    float getArea(float base, float altura){
        return(base*altura/2.0);
    }
};

class Figura{
    std::vector<FormaGeometrica*> objetos;
    int n;
public:
    Figura(){
        std::cin >> n;
        for(int i=0;i<n;i++){
            objetos.push_back();
        }
    }

};

int main(){
    return 0;
}