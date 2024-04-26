#ifndef _FILA_H
#define _FILA_H

#include <string>

using namespace std;

// Utilize templates
template<typename T>

class Fila{
    T *vector;
    int max_size, size = 0;
public:
    Fila(int pmax) {
        max_size = pmax;
        vector = new T[pmax]();
    }
    ~Fila() {
        delete[] vector;
    }
    void inserir_atras(T elem) {
        vector[size] = elem;
        size+=1;
    }
    T frente() {
        return vector[0];
    }
    T remover_frente() {
        T temp = vector[0];
        for(int i=0;i<size;i++){
            vector[i] = vector[i+1];
        }
        size--;
        return temp;
    }
    int getTamanho() {
        return size;
    }
};
#endif /* _FILA_H */