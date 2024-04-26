#include <iostream>

template <typename gasparzin>
void bubble_sort(int tamanho, gasparzin* array){
    for(int i=0; i < tamanho; i++){
        for(int y=0; y < tamanho-1; y++){
            if(array[y] > array[y+1]){
                gasparzin tmp = array[y];
                array[y] = array[y+1];
                array[y+1] = tmp;
            }
        }
    }
}

template <typename gasparzin>
void imprimi_array(int tamanho, gasparzin* array){
    for(int i=0; i < tamanho; i++){
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}

int main(){
    int n = 5;
    int i_array[5] = {4, 8, 3, 5, 1};
    bubble_sort(n, i_array);
    imprimi_array(n, i_array);

    double d_array[5] = {5.4, 5.8, 5.3, 5.5, 5.1};
    bubble_sort(n, d_array);
    imprimi_array(n, d_array);

    char c_array[5] = {'b', 't', 'g', 'l', 'a'};
    bubble_sort(n, c_array);
    imprimi_array(n, c_array);
}