#ifndef _OBJSS_H
#define _OBJSS_H

// Defina e Implemente sua classe ObjSS

template <typename T, typename V, typename S>
class ObjSS{
    std::string nome;
    T Ti;
    V Tp;
    S Td;
public:
    ObjSS(std::string pNome,T pTi,V pTp,S pTd){
        nome = pNome;
        Ti = pTi;
        Tp = pTp;
        Td = pTd;
    }
    void info(){
        std::cout << "O objeto "<< nome <<" de idade "<< Ti <<" anos e peso "<< Tp <<" kg está a uma "
                     "distância de "<< Td <<" anos-luz da terra."<< std::endl;
    }
};

#endif /* _OBJSS_H */