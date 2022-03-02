#include "NumberList.h"

#include <iostream>
using namespace std;

void Init() {
    // functie globala != metoda NumberList::Init()
}

void NumberList::Init() {
    count = 0;
}

bool NumberList::Add(int x) {
    if (count == 20) {
        return false;
    }
    numbers[count] = x;
    count++;
    return true;
}

void NumberList::Sort() {

}

void NumberList::Print() {
    for (int i = 0; i < count; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}