#include <iostream>

//Defina a função maior

template <typename T>
T maior(T a,T b,T c){
    if(a>b) {
        if(a>c) return a;
        else return c;
    }else{
        if(b>c) return b;
        else return c;
    }

}
int main(){
    std::cout << maior(1, 3, 2) << std::endl;
    std::cout << maior(75.4, 50.0, 75.2) << std::endl;
    std::string a("gato"), b("rato"), c("dinossauro");
    std::cout << maior(a, b, c) << std::endl;
}