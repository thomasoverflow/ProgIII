//
// Created by thomas on 23/04/24.
//

#ifndef PROGIII_FILA_H
#define PROGIII_FILA_H

#include <string>

// Apenas a declaração da classe Fila
class Fila{
    int maxSize, size=0;
    std::string *vect;
    public:
        Fila(int pmax);
        ~Fila();
        void inserir(std::string elem);
        std::string frente();
        std::string remover();
        int getTamanho();
};

#endif //PROGIII_FILA_H
