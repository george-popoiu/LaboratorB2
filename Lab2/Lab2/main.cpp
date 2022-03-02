#include "NumberList.h"

#include <iostream>
using namespace std;

struct NumberListStr {
    int count;
    int numbers[20];
};

void Init(NumberListStr* s) {
    s->count = 0;
}

bool Add(NumberListStr* s, int x) {
    if (s->count == 20) {
        return false;
    }
    s->numbers[s->count] = x;
    s->count++;
    return true;
}

void Print(NumberListStr* s) {
    for (int i = 0; i < s->count; ++i) {
        cout << s->numbers[i] << " ";
    }
    cout << endl;
}

int main() {
    NumberList v;
    v.Init();
    v.Add(10); v.Add(20); v.Add(30);
    NumberList w;
    w.Init();
    w.Add(1); w.Add(2); w.Add(3);
    v.Print();
    w.Print();

    NumberListStr z;
    Init(&z);
    Add(&z, 100); Add(&z, 200); Add(&z, 300);
    Print(&z);

    return 0;
}