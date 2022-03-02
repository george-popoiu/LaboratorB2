#pragma once

class NumberList
{
    int numbers[20];
    int count;
public:
    void Init();          // count will be 0
    bool Add(int x);      // adds X to the numbers list and increase the data member count.
                          // if count is bigger or equal to 10, the function will return false

    void Remove(int index); // elimine elementul de la pozitia index
    void Insert(int index, int x); // adauga la pozitia index valoarea x
    void InsertVector(int index, int v[], int n); // adauga la pozitia index vectorul v de n elemente

    void Sort();          // will sort the numbers vector
    void Print();         // will print the current vector
};