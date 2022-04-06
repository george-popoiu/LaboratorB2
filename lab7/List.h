#pragma once

#include <iostream>
using namespace std;

template<typename T>
class List {
    T* v;
    int count;
    int size;
    void resize();
public:
    List();
    void push(T element);
    void print();
    void sort(int (*compare)(T a, T b));

    List<T> sublist(int i, int j);
    List<T> filter(T a);
};

template<typename T>
void List<T>::sort(int (*compare)(T a, T b)) {
    // v[i] <=> *(v + i)
    int rez = compare(v[0], v[1]);
    if (rez == -1) {
        cout << "Primul e mai mic" << endl;
    } else if (rez == 1) {
        cout << "Primul e mai mare" << endl;
    } else {
        cout << "Egale" << endl;
    }
}

template<typename T>
void List<T>::resize() {
    T* newV = new T[size * 2];
    for (int i = 0; i < count; ++i) {
        newV[i] = v[i];
    }
    delete[] v;
    v = newV;
    size = size * 2;
}

template<typename T>
List<T>::List() {
    v = new T[5];
    size = 5;
    count = 0;
}

template<typename T>
void List<T>::push(T element) {
    if (count == size) {
        this->resize();
    }
    v[count] = element;
    count++;
}

template<typename T>
void List<T>::print() {
    for (int i = 0; i < count; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}