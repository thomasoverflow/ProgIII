#ifndef _ESPERA_H
#define _ESPERA_H

#include <string.h>

using namespace std;

template <template <typename> class T, typename G>
// Implemente sua lista de espera
class Espera{
    string disciplina;
    int tamanho;
    T<G> *nomes;
public:
    Espera(string pNome, int pMax){
        disciplina = pNome;
        tamanho = pMax;
        nomes = new T<G>[pMax];
    }

    void inserir_aluno(std::string nome){

    }

    void mostrar_lista(){

    }

    ~Espera(){
        delete nomes;
    }
};
#endif /* _ESPERA_H */