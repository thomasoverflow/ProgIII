//
// Created by thomas on 12/04/24.
//

#ifndef PROG_III_CIRCULO_H
#define PROG_III_CIRCULO_H


class complex_number{
    float real;
    float amigo;
    float norm;
public:
    complex_number(float a, float b);
    complex_number(const complex_number& outro);
    void getNorm();
};

#endif //PROG_III_CIRCULO_H
