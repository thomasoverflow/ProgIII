/* main.cpp:
#include <iostream>
#include <string>


#include "Disciplina.h"


int main(){
    int max;
    std::cin >> max;
    Disciplina d(max);
    try{
        d.inserir("A A");
        d.inserir("B B");
        d.mostrar();
        d.inserir("C C");
        d.mostrar();
    }catch(int max){
        std::cout << "Erro - o número máximo é " << max << "\n";
    }
    return 0;
}
*/

#ifndef _DISCIPLINA_H
#define _DISCIPLINA_H

class Disciplina{
    std::string *classe;
    int tamanho;
    int filling;
    public:
        Disciplina(int max){
            classe = new std::string[max]();
            tamanho = max;
            filling = 0;
        }
        void inserir(std::string pNome){
            if(filling >= tamanho) throw tamanho;
            else classe[filling] = pNome;
            filling+=1;
        }
        void mostrar(){
            for(int i=0;i<filling;i++){
                std::cout << classe[i] <<std::endl;
            }
        }
        ~Disciplina(){
            delete[] classe;
        }
};

#endif /* _DISCIPLINA_H */
