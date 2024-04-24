//
// Created by thomas on 23/04/24.
//

#ifndef PROGIII_FILA_H
#define PROGIII_FILA_H

#include <string>

/*Método de implementação de lista simplesmente encadeada*/
struct Node {
    std::string data;
    Node* next;
    Node* prev;
};

// Apenas a declaração da classe Fila
class Fila{
    Node* head;
    int maxSize, size;
    public:
        Fila(int pmax);
        ~Fila();
        void inserir(std::string elem);
        std::string frente();
        std::string remover();
        int getTamanho();
};

#endif //PROGIII_FILA_H
