#include <string>
#include <fstream>
#include <map>
#include <queue>
#include <iostream>

using namespace std;

class CompareModule
{    
public:    
    bool operator() (const pair<string,int>& v1, const pair<string,int>& v2) const
    {
        //
    }
};

class Pereche {
public:
    string cuv;
    int nr;
    bool operator<(const Pereche& p) const {
        //..
    }
};

int main() {
    string line;
    fstream f;
    f.open("Text.txt");
    getline(f, line);
    //f >> line;
    f.close();
    cout << line << endl;

    map<string, int> M;
    priority_queue<pair<string, int>, vector<pair<string, int>>, CompareModule> q;
    priority_queue<Pereche> q2;

    return 0;
}