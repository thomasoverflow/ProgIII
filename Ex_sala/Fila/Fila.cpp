//
// Created by thomas on 23/04/24.
//
#include <Fila.h>

using namespace std;

Fila::Fila(int pmax){
    head=nullptr;
    maxSize = pmax;
    size = 0;
}

Fila::~Fila(){
    if (head == nullptr) return;
        Node* current = head;
        Node* next = head->next;
    while (next != head) {
        delete current;
        current = next;
        next = next->next;
    }
    delete current;
    head = nullptr;
}

void Fila::inserir(string elem) {
    Node* new_node = new Node();
    new_node->data = elem;
    new_node->next = nullptr;
    new_node->prev = nullptr;

    //Checa condição da lista
    if(head == nullptr){
        head = new_node;
        head->prev = head;
        head->next = head;
    }else{
        Node* last = head->prev;
        last->next = new_node;
        new_node->prev = last;
        new_node->next = head;
        head->prev = new_node;
    }
    size++;
}

/*
Fila::frente(){
    return lista[head-1];
}

string Fila::remover(){

}
*/

int Fila::getTamanho(){
    return size;
}