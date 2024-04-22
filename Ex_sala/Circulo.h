#ifndef _CIRCULO_H
#define _CIRCULO_H

// Defina classe Circulo
// Em caso de erro no construtor lance uma exceção

class Circulo{
    float raio;
    public:
        Circulo(float pRaio){
            if(pRaio <= 0) throw pRaio;
            else raio = pRaio;
        }
        float getRaio(){
            return raio;
        }
        ~Circulo(){}
};

#endif /* _CIRCULO_H */
