//
// Created by thomas on 23/04/24.
//
#include <Fila.h>

using namespace std;

Fila::Fila(int pmax){
    maxSize = pmax;
    vect = new string[pmax]();
}

Fila::~Fila(){
    delete[] vect;
}

void Fila::inserir(string elem) {
    vect[size] = elem;
    size+=1;
}


string Fila::frente(){
    return vect[0];
}


string Fila::remover(){
    string temp = vect[0];
   for(int i=0;i<size;i++){
       vect[i] = vect[i+1];
   }
   size--;
   return temp;
}


int Fila::getTamanho(){
    return size;
}