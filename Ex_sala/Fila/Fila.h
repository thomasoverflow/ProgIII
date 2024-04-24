//
// Created by thomas on 23/04/24.
//

#ifndef PROGIII_FILA_H
#define PROGIII_FILA_H

#include <string>

// Apenas a declaração da classe Fila
class Fila{
    std::string *lista;
    int head, tail, max_size;
    public:
        Fila(int pmax);
        ~Fila();
        void inserir(std::string elem);
        std::string frente();
        std::string remover();
        int getTamanho();
};

#endif //PROGIII_FILA_H
