#include <iostream>
using namespace std;

class Lista
{
private:
    struct nodo
    {
       int valor;
       nodo* siguiente;
       nodo* anterior;
    };

    nodo* primero = nullptr;
    nodo* ultimo = nullptr;
    int tamano = 0;

public:
    Lista() {};
    void pushfront(int valor)
    {
        if (tamano == 0)
        {
            primero = ultimo = new nodo;
            primero->valor = valor;
            primero->siguiente = nullptr;
            primero->anterior = nullptr;
        }
        else
        {
            nodo* node = new nodo;
            node->valor = valor;
            node->siguiente = primero;
            node->anterior = nullptr;
            primero->anterior = node;
            primero = node;
        };
        tamano++;
    };

    void pushback(int valor)
    {
        if (tamano == 0)
        {
            primero = ultimo = new nodo;
            ultimo->valor = valor;
            ultimo->anterior = nullptr;
            ultimo->siguiente = nullptr;

        }
        else
        {
            nodo* node = new nodo;
            node->valor = valor;
            node->siguiente = nullptr;
            node->anterior = primero;
            primero->siguiente = node;
            ultimo = node;

        }

    };

    void print()
    {
        nodo* actual = primero;

        while (actual != nullptr)
        {
            cout << actual->valor << " | ";
            actual = actual->siguiente;
        };
        cout << endl;
    };

};


int main()
{
    Lista test;
    test.pushfront(6);
    test.pushfront(3);
    test.pushfront(8);

    test.print();

}
