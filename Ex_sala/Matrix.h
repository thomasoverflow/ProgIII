#ifndef _MATRIX_H
#define _MATRIX_H

class Matrix{
    int ncol;
    int nlin;
    float *dados;
    public:
        Matrix(int nlin, int ncol){
            this->ncol = ncol;
            this->nlin = nlin;
            this->dados = new float[this->nlin*this->ncol]();
        }
        void set(int lin, int col, float dado){
            this->dados[lin * this->ncol + col] = dado;
        }
        void mostrar(){
            for(int i=0;i<this->nlin;i++){
                for(int j=0;j<this->ncol;j++){
                    std::cout << this->dados[i*this->ncol + j] << " " ;
                }
                std::cout << std::endl;
            }
        }
        ~Matrix(){
            delete[] dados;
        }
};

#endif /* _MATRIX_H */
