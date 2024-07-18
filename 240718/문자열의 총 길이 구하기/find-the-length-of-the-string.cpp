#include <iostream>
using namespace std;

int main() {
    string str;

    getline(cin, str);

    int sum = 0;

    for(int i = 0; i < str.size(); ++i)
    {
        if(str[i] != ' ')
            ++sum;
    }

    cout << sum;
    return 0;
}