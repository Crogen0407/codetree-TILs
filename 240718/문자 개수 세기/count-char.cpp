#include <iostream>
using namespace std;

int main() {

    string str;
    string cstr;
    char c;

    getline(cin, str);
    cin >> cstr;

    int sum = 0;

    for(int i=0; i < str.size(); ++i)
    {
        if(str[i] == cstr[0])
            ++sum;
    }

    cout << sum;

    return 0;
}