#include "Ejercicio03.h"


MinStack::MinStack() {
    cima = nullptr; 
}

void MinStack::push(int value) {
    if (cima == nullptr) {
        cima = new Nodo(value, value, nullptr);
    }
    else {
        cima = new Nodo(value, min(value, cima->minimo), cima);
    }
}

void MinStack::pop() {
    if (cima != nullptr) {
        Nodo* temp = cima;
        cima = cima->siguiente;
        delete temp;
    }
}

int MinStack::top() {
    if (cima != nullptr) {
        return cima->valor;
    }
    else {
        return 0;
    }
}

int MinStack::getMin() {
    if (cima != nullptr) {
        return cima->minimo;
    }
    else {
        return 0;
    }
}