//
// Created by thomas on 24/04/24.
//
#include<iostream>
#include<Fila.h>

int main(){
    Fila Test(10);
    Test.inserir("Thomas");
    Test.inserir("João");

    std::cout << "Tamanho atual da lista => "<< Test.getTamanho()<<std::endl;
    return 0;
}