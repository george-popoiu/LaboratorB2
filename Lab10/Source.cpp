#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <functional>
using namespace std;

int g(int a, int b) {
    return a + b;
}

class CommandManager {
private:
    map<string, function<void(vector<string>)>> commands;
    //map<string, void (*comanda)(vector<string>)> commands;
    //function<void(vector<string>)> <=> void (*comanda)(vector<string> parametri)
public:
    void add(string name, function<void(vector<string>)> fn);

    // run shall read a line from stdin in a loop, split it by whitespaces.
    // the first word will be the command name. if no word has been found, it will do nothing
    // then it will search the map for the name, and it will invoke the callback if it founds it
    // or it will show a message if it can't find it
    // the args for the callback will not contain the command name
    // if the `stop` command is found, the function will return
    // try doing this yourself; if you spent too much time on this, look at https://gist.github.com/xTachyon/9e698a20ce6dfcae9a483b28778af9fb
    void run();
};

int main() {
    int c;
    cout << "c = "; cin >> c;
    auto f = [&](int a, int b) -> int {
        return a + b + c;
    };
    cout << "c = "; cin >> c;
    cout << f(10, 20) << endl;

    auto f_sort = [](string a, string b) -> bool {
        if (a.length() == b.length()) {
            return (a > b);
        }
        return (a.length() > b.length());
    };

    vector<string> v = { "this", "is", "a", "test" };
    sort(v.begin(), v.end(), f_sort);

    for (string s : v) {
        cout << s << endl;
    }

    return 0;
}