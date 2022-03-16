#include "Sort.h"

int main() {
    Sort s1(10, 50, 90);
    Sort s2({ 10, 20, 30, 40, 50 });
    s2.Merge(s1);
    s2.Print(); // 10 10 20 30 40 50 50 90

    int v[3]; v[0] = 1; v[1] = 2; v[2] = 3;
    Sort s3(v, 3);
    Sort s4(10, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1);
    Sort s5("10,40,100,5,70");

    return 0;
}