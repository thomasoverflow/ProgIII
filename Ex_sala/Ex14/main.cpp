#include <iostream>
#include "ObjSS.h"

/********************
    Não modificar
    - Disponibilizado apenas para conferência
**********************/

int main(){
    ObjSS<int, int, double> voyage("Voyage 1", 46, 733, 0.00158);
    ObjSS<std::string, double, int> wohg64("WOH G64", "aproximadamente 5000000", 50e30, 160000);
    voyage.info();
    wohg64.info();
}