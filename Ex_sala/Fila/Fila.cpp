//
// Created by thomas on 23/04/24.
//

#include "Fila.h"

Fila::Fila(int pmax){
    head = 0;
    tail = 0;
    max_size = pmax;
    lista = new std::string[pmax]();
}

Fila::~Fila(){
    delete[] lista;
}

Fila::inserir(std::string elem){
    lista[head] = elem;
    head+=1;
}

Fila::frente(){
    return lista[head-1];
}

Fila::remover(){

}

Fila::getTamanho(){

}