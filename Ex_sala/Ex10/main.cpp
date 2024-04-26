#include <iostream>
#include "Lista.h"

/********************
    Não modificar
    - Disponibilizado apenas para conferência
**********************/

int main(){
    Lista<int> li(3);
    li.inserir_atras(3);
    li.inserir_frente(1);
    std::cout << li.frente() << "\n";
    std::cout << li.atras() << "\n";
    auto ri = li.remover_frente();
    std::cout << ri << "\n";
    li.inserir_frente(2);
    li.inserir_frente(1);
    std::cout << li.frente() << "\n";
    std::cout << li.atras() << "\n";

    Lista<float> lf(3);
    lf.inserir_atras(3.1);
    lf.inserir_atras(1.1);
    std::cout << lf.frente() << "\n";
    std::cout << lf.atras() << "\n";
    auto rf = lf.remover_frente();
    std::cout << rf << "\n";
    lf.inserir_frente(2.1);
    lf.inserir_frente(4.1);
    std::cout << lf.frente() << "\n";
    std::cout << lf.atras() << "\n";
}