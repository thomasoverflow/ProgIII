//
// Created by thomas on 12/04/24.
//
#include<iostream>
#include "Circulo.h"
#include<cmath>

using namespace std;

complex_number::complex_number(float a, float b){
    this->real = a;
    this->amigo = b;
}
complex_number::complex_number(const complex_number& outro){
    this->real = outro.real;
    this->amigo = outro.amigo;
}
void complex_number::getNorm(){
    this->norm = sqrt(this->real * this->real +this->amigo * this->amigo);
    cout << "A norma desse número é: " << this->norm << endl;
}