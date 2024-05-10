#include <iostream>

/*
     Construa uma classe para Círculos, que tenha 
    um construtor que aceite o raio como único parâmetro 
    e verifique se o raio é válido. Caso o raio seja menor 
    ou igual a zero, lance uma exceção. Implemente o método 
    getRaio que retorna o raio.
*/

template <typename T>
T calculo_retangulo(T comprimento, T largura){
    return (comprimento * largura);
}

int main(){
    int ia = 2, ib = 3;
    float fa = 2.5, fb = 3.5;
    double da = 2.55, db = 3.55;
    std::cout << calculo_retangulo(ia, ib) << "\n";
    std::cout << calculo_retangulo(fa, fb) << "\n";
    std::cout << calculo_retangulo(da, db) << "\n";
}