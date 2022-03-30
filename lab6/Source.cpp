#include <iostream>
using namespace std;

class Car {
    int viteza;
    int consum;
public:
    void setViteza(int viteza) {
        this->viteza = viteza;
    }
    int getViteza() {
        return this->viteza;
    }
    void setConsum(int consum) {
        this->consum = consum;
    }
    int getConsum() {
        return this->consum;
    }
    virtual void print_info() = 0;
};

class Dacia : public Car {
public:
    Dacia() {
        setViteza(60);
        setConsum(5);
    }
    void print_info() {
        cout << "Dacie: viteza = " << getViteza() << ", consum = " << getConsum() << endl;
    }
};

class Mercedes : public Car {
public:
    Mercedes() {
        setViteza(130);
        setConsum(7);
    }
    void print_info() {
        cout << "Mercedes: viteza = " << getViteza() << ", consum = " << getConsum() << endl;
    }
};

class List {
public:
    virtual int operator[](unsigned index) = 0;

    virtual void push_front(int x) = 0;
    virtual void push_back(int x) = 0;

    virtual bool empty() = 0;
    virtual int size() = 0;

    // get the first element    
    virtual int front() = 0;

    // get the last element
    virtual int back() = 0;
};

class VectorList : public List {
    int v[100];
public:
    virtual int operator[](unsigned index) { return 0; }

    virtual void push_front(int x) {}
    virtual void push_back(int x) {}

    virtual bool empty() {}
    virtual int size() {}

    // get the first element    
    virtual int front() {}

    // get the last element
    virtual int back() {}
};

class LinkedList : public List {
    struct Nod {
        int element;
        Nod* next;
    };
public:
    virtual int operator[](unsigned index) { return 0; }

    virtual void push_front(int x) {}
    virtual void push_back(int x) {}

    virtual bool empty() {}
    virtual int size() {}

    // get the first element    
    virtual int front() {}

    // get the last element
    virtual int back() {}
};

int main() {
    List* l = new VectorList();
    List* l2 = new LinkedList();
    for (int i = 0; i < 10; ++i) {
        l->push_back(i);
        l2->push_back(i);
    }
    for (int i = 0; i < l->size(); ++i) {
        cout << (*l)[i] << " " << (*l2)[i] << endl;
        cout << l->operator[](i) << " " << l2->operator[](i) << endl;
    }

    Dacia d;
    d.print_info();

    Car* c;
    c = &d;
    c->print_info();

    c = new Mercedes();
    c->print_info();

    Car* v[100];
    v[0] = new Mercedes();
    v[1] = new Dacia();
    v[2] = new Mercedes();
    for (int i = 0; i < 3; ++i) {
        v[i]->print_info();
    }

    return 0;
}