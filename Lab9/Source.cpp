#include <iostream>
using namespace std;

template<typename K, typename V>
struct Pereche {
    K key;
    V value;
    int index;
};

template<typename K, typename V> 
class Map {
    Pereche<K, V> v[100];
    int count;
public:
    Map() {
        count = 0;
    }
    V& operator[](K key) {
        for (int i = 0; i < count; ++i) {
            if (v[i].key == key) {
                return v[i].value;
            }
        }
        v[count].key = key;
        v[count].index = count;
        return v[count++].value;
    }
    void Print() {
        for (int i = 0; i < count; ++i) {
            cout << v[i].key << ": " << v[i].value << endl;
        }
    }
    void swap(Map<K, V>& m) {}
    void add(Map<K, V>& m) {}
};

int main() {
    Map<int, const char*> m;
    m[10] = "C++";
    m[20] = "is";
    m[30] = "easy";
    m.Print();
    m[30] = "hard";
    m.Print();

    Map<int, const char*> m2;
    m2[100] = "abc";
    m2[200] = "def";
    m2[30] = "interesting";

    //m.swap(m2);
    m.add(m2);

    return 0;
}