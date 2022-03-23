#include "Number.h"
#include <iostream>
using namespace std;

int main() {
    Number n1("10", 10);
    n1.Print();
    Number n2("30", 10);
    if (n1 < n2) {
        cout << "n1 < n2" << endl;
    }
    if (n1.operator<(n2)) {
        cout << "n1 < n2" << endl;
    }
    Number n3 = n1 + n2;
    n3.Print();
    Number n4 = operator+(n1, n2);
    n4.Print();
    Number n5("123456", 10);
    Number n6 = n5 + n5;
    n6.Print();
    cout << n6[4] << endl;
    cout << n6.operator[](4) << endl;

    Number n7 = n2 | n1; // n5 = 3010

    return 0;
}