//
// Created by thomas on 24/04/24.
//
#include<iostream>
#include<Fila.h>

int main(){
    Fila Test(10);
    Test.inserir("Thomas");
    Test.inserir("João");
    Test.inserir("Vanessa");


    std::cout << "Tamanho atual da lista => "<< Test.getTamanho()<<std::endl;
    std::cout << "Valor na frente => " << Test.frente() << std::endl;
    std::cout << "Valor removido => " << Test.remover() << std::endl;
    std::cout << "Valor removido => " << Test.remover() << std::endl;

    return 0;
}