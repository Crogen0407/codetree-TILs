#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for(int i = 0; i < s.size(); ++i)
    {
        if(i > 1 && i < 10)
            cout << s[i];
    }
    return 0;
}