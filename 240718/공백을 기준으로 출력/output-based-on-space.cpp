#include <iostream>
using namespace std;

int main() {
    string str1;
    string str2;

    getline(cin, str1);
    getline(cin, str2);

    for (int i = 0; i < str1.size(); ++i)
    {
        if(str1[i] == ' ') continue;
        cout << str1[i];
    }

    for (int i = 0; i < str2.size(); ++i)
    {
        if(str2[i] == ' ') continue;
        cout << str2[i];
    }

    return 0;
}