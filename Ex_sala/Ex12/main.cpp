#include <iostream>
#include "ContaBancaria.h"

/********************
    Não modificar
    - Disponibilizado apenas para conferência
**********************/

int main(){
    ContaBancaria conta1(1);
    ContaBancaria conta2(2);

    std::cout << conta1.getSaldo() << std::endl;
    conta1.depositar(50);
    std::cout << conta1.getSaldo() << std::endl;
    conta1.sacar(25);
    std::cout << conta1.getSaldo() << std::endl;

    std::cout << conta2.getSaldo() << std::endl;
    conta2.depositar(100);
    std::cout << conta2.getSaldo() << std::endl;
    conta2.sacar(200);
    std::cout << conta2.getSaldo() << std::endl;

    std::cout << conta1.getSaldo() << std::endl;
}