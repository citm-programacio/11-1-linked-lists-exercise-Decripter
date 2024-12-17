#include <iostream>
using namespace std;



class Lista
{
private:
    struct nodo
    {
    int valor;
    nodo* anterior;
    nodo* siguiente;
    };

    nodo* aux = nullptr;
    nodo* primero = nullptr;
    nodo* ultimo = nullptr;

public:
    Lista() {};
    void pushback(int n)
    {
        if (primero == nullptr)
        {
                primero = new nodo();
                ultimo = new nodo();

                primero->valor = n;
                primero->anterior = nullptr;
                primero->siguiente = nullptr;

                ultimo = primero;
        }

        else
        {
            aux = new nodo;
            
            aux->valor = n;
            aux->anterior = ultimo;
            aux->siguiente = nullptr;

            ultimo->siguiente = aux;
            ultimo = aux;
        }

    };

    void pushfront(int n)
    {
        if (primero == nullptr)
        {
            primero = new nodo;
            ultimo = new nodo;

            primero->valor = n;
            primero->anterior = nullptr;
            primero->siguiente = nullptr;

            ultimo = primero;
        }

        else
        {
            aux = new nodo;

            aux->valor = n;
            aux->siguiente = primero;
            aux->anterior = nullptr;

            primero->anterior = aux;
            primero = aux;
        };

        ultimo->siguiente = nullptr;
    };

    void imprimir()
    {
        aux = primero;
        while (aux != nullptr)
        {
            cout << aux->valor <<"  ";
            aux = aux->siguiente;
        };
    };

};


int main()
{
    Lista test;
    test.pushback(1);
    test.pushback(2);
    test.pushback(3);
    test.pushback(4);

    test.pushfront(7);
    test.pushfront(10);
    test.pushback(5);

    test.imprimir();
}

/*
========================================================================================================================
  MMP""MM""YMM `7MM"""Mq.  `YMM'   `MM'    `7MMF'  `7MMF'      db      `7MM"""Mq.  `7MM"""Yb.   `7MM"""YMM  `7MM"""Mq.
  P'   MM   `7   MM   `MM.   VMA   ,V        MM      MM       ;MM:       MM   `MM.   MM    `Yb.   MM    `7    MM   `MM.
       MM        MM   ,M9     VMA ,V         MM      MM      ,V^MM.      MM   ,M9    MM     `Mb   MM   d      MM   ,M9
       MM        MMmmdM9       VMMP          MMmmmmmmMM     ,M  `MM      MMmmdM9     MM      MM   MMmmMM      MMmmdM9
       MM        MM  YM.        MM           MM      MM     AbmmmqMA     MM  YM.     MM     ,MP   MM   Y  ,   MM  YM.
       MM        MM   `Mb.      MM           MM      MM    A'     VML    MM   `Mb.   MM    ,dP'   MM     ,M   MM   `Mb.
     .JMML.    .JMML. .JMM.   .JMML.       .JMML.  .JMML..AMA.   .AMMA..JMML. .JMM..JMMmmmdP'   .JMMmmmmMMM .JMML. .JMM.
==========================================================================================================================
*/
