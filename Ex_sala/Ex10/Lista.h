#ifndef _LISTA_H
#define _LISTA_H

// Utilize templates
template <typename T>
class Lista{
    int size = 0, head = 0, tail = 0, max_size;
    T *roundabout;
public:
    Lista(int pmax) {
        roundabout = new T[pmax]();
        max_size = pmax;
    }

    ~Lista(){
        delete[] roundabout;
    }

    void inserir_atras(T elem){
        roundabout[tail] = elem;
        tail = (tail + 1) % max_size; // Atualiza o tail circularmente
        size++;
    }

    void inserir_frente(T elem){
        head = (head - 1 + max_size) % max_size; // Atualiza o head circularmente
        roundabout[head] = elem;
        size++;
    }

    T frente(){
        return roundabout[head];
    }

    T atras(){
        return roundabout[(tail - 1 + max_size) % max_size];
    }

    T remover_frente() {
        if (size == 0) {
            throw std::out_of_range("A lista está vazia.");
        }
        T elem = roundabout[head];
        head = (head + 1) % max_size;
        size--;
        return elem;
    }

    T remover_atras() {
        if (size == 0) {
            throw std::out_of_range("A lista está vazia.");
        }
        tail = (tail - 1 + max_size) % max_size;
        T elem = roundabout[tail];
        size--;
        return elem;
    }

    int getTamanho() {
        return size;
    }
};
#endif /* _LISTA_H */