#include "List.h"

int my_compare(double a, double b) {
    if (a < b) return -1;
    if (a > b) return 1;
    return 0;
}

int my_compare2(double a, double b) {
    if (a > b) return -1;
    if (a < b) return 1;
    return 0;
}

int main() {
    List<double> l;
    l.push(1.0); l.push(2.0); l.push(3.0);
    l.print();
    for (int i = 0; i < 10; ++i) {
        l.push(i);
    }
    l.print();
    l.sort(my_compare);
    l.sort(my_compare2);
    List<double> l2 = l.sublist(0, 2);
    l2.print(); // 1 2 3
    List<double> l3 = l.filter(1);
    l3.print(); // 2 3 0 2 3 4 5 6 7 8 9
    return 0;
}