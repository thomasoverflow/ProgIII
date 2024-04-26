#include <iostream>
#include <string>

/********************
    Não modificar
    - Disponibilizado apenas para conferência
**********************/

#include "Fila.h"

int main(){
    Fila<int> i_f(5);
    i_f.inserir_atras(1);
    std::cout << i_f.frente() << "\n";
    i_f.inserir_atras(2);
    std::cout << i_f.frente() << "\n";
    std::cout << i_f.getTamanho() << "\n";
    auto ir = i_f.remover_frente();
    std::cout << ir << "\n";
    std::cout << i_f.frente() << "\n";

    Fila<char> c_f(5);
    c_f.inserir_atras('a');
    std::cout << c_f.frente() << "\n";
    c_f.inserir_atras('b');
    std::cout << c_f.frente() << "\n";
    std::cout << c_f.getTamanho() << "\n";
    auto cr = c_f.remover_frente();
    std::cout << cr << "\n";
    std::cout << c_f.frente() << "\n";
}