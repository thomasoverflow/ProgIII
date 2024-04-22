#include <iostream>

using namespace std;

class Circulo{
    float raio;
public:
    Circulo(float raio){
        if(raio <= 0){
            cout << "Raio INVÁLIDO" << endl;
            this->raio = 1;
            cout << "Raio de tamanho 1 atribuido ao circulo" << endl;
        }
        else{
            this->raio = raio;
            cout << "Círculo de tamanho " << getRaio() << " gerado!" << endl;
        }
    }
    float getRaio(){
        return this->raio;
    }
    void setRaio(float new_raio){
        cout << "Circulo de raio " << getRaio() << " trocado para " << new_raio << endl;
        this->raio = new_raio;
    }

    ~Circulo(){
        cout << "Circulo de raio " << getRaio() << " destruido" << endl;
    }
};

int main(){
    float raio;
    cout << "Digite o valor do raio para o circulo: ";
    cin >> raio;
    Circulo meu_circulo(raio);

    meu_circulo.setRaio(9);
    return 0;
}

