//
// Created by thomas on 03/05/24.
//
#ifndef _CONTA_H
#define _CONTA_H

// Defina e Implemente sua classe ContaBancaria
template <typename T>
class ContaBancaria{
    T conta, saldo;
public:
    ContaBancaria(T pConta){
        conta = pConta;
        saldo = 0;
    }
    void depositar(T dValor){
        saldo += dValor;
    }
    void sacar(T sValor){
        saldo-= sValor;
    };
    T getSaldo(){
        return saldo;
    }
};
#endif /* _LISTA_H */
