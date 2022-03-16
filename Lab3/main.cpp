#include "Math.h"
#include <iostream>
using namespace std;

int main() {
    cout << Math::Add(10, 20) << endl;

    Math m;
    cout << m.Add(10, 20) << endl; // Math::Add(10, 20)

    cout << Math::Add(1.4, 2.3) << endl;

    cout << Math::Add(6, 1, 2, 3, 4, 5, 6) << endl;
    cout << Math::Add(8, 1, 2, 3, 4, 5, 6, 7, 8) << endl;

    return 0;
}