#include <iostream>
#include <list>

class Texto{
protected:
    std::string txt;
public:
    Texto(std::string ptxt) : txt(ptxt){}

};

class TextoPortugues : public Texto{
    //Código UTF-8 para bandeira
    std::string bandeira = u8"\360\237\207\247\360\237\207\267 ";
public:
    //Copiar Construtor de Texto
    using Texto::Texto;
    //Método getTexto
    std::string getTexto(){
        return(bandeira + txt + "\n");
    }
};

class TextoIngles : public Texto{
    //Código UTF-8 para bandeira
    std::string bandeira = u8"\360\237\207\272\360\237\207\270 ";
public:
    //Copiar Construtor de Texto
    using Texto::Texto;
    //Método getTexto
    std::string getTexto(){
        return(bandeira + txt + "\n");
    }
};

void imprimir_chat(std::list<Texto*> chat){
    for(){// Como iterar na lista?
        // Imprimir no std::cout getTexto para cada elemento

    }
}

int main() {
    std::list<Texto*> chat;
    chat.push_back(new TextoPortugues("Olá"));
    chat.push_back(new TextoIngles("Hello"));
    chat.push_back(new TextoIngles("How are you?"));
    chat.push_back(new TextoPortugues("Eu vou bem!"));
    imprimir_chat(chat);

    //Como Liberar a memória de todos os elementos?


    // Vai acontecer um erro nesta linha se você esqueceu algum virtual importante!
    static_assert(std::is_polymorphic_v<Texto>);
    // Vai acontecer um erro nesta linha se você esqueceu de declarar um método virtual puro!
    static_assert(std::is_abstract<Texto>(), "A classe texto não é abstrata");
    return 0;
}