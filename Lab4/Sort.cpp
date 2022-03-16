#include "Sort.h"
#include <iostream>
using namespace std;

Sort::Sort(int n, int min, int max)
{
}

Sort::Sort(initializer_list<int> list)
{
    count = 0;
    
    for (int x : list) {
        A[count] = x;
        count++;
    }

    /*initializer_list<int>::iterator it;
    for (it = list.begin(); it != list.end(); ++it) {
        A[count] = *it;
        count++;
    }*/
}

Sort::Sort(int v[], int n)
{
}

Sort::Sort(int n, ...)
{
}

Sort::Sort(const char*)
{
}

void Sort::InsertSort(bool ascendent)
{
}

void Sort::QuickSort(bool ascendent)
{
}

void Sort::BubbleSort(bool ascendent) {}
void Sort::Print() {
    for (int i = 0; i < count; ++i) {
        cout << A[i] << " ";
    }    
    cout << endl;
}
int  Sort::GetElementsCount() { return 0; }
int  Sort::GetElementFromIndex(int index) { return 0; }