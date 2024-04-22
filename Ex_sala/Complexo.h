#ifndef _COMPLEXO_H
#define _COMPLEXO_H
#include<math.h>
class Complexo {
    float real;
    float imag;
    public:
        Complexo (float pReal, float pImag){
            real = pReal;
            imag = pImag;
        }
        float norma(){
            return (sqrt(real*real+imag*imag));
        }
};
#endif
