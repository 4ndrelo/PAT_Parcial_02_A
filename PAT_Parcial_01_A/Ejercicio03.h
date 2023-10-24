#pragma once
struct Nodo 
{
    int valor;
    int minimo;
    Nodo* siguiente;
    Nodo(int v, int m, Nodo* s) 
    {
        valor = v;
        minimo = m;
        siguiente = s;
    }
};
class MinStack
{
public:
	MinStack();

	void push(int value);

	void pop();

	int top();

	int getMin();

private:
    Nodo* cima; 
};


