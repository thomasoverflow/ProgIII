#include<iostream>
#include "Circulo.h"

using namespace std;

int main(){float raio;
    float a,b;

    cout << "Digite o valor de A e B: " ;
    cin >> a;
    cin >> b;

    complex_number num_1(a,b);
    num_1.getNorm();

    return 0;
}

