#include <iostream>
using namespace std;

int main() {
    string strs[4];

    for (int i = 0; i < 4; ++i)
    {
        cin >> strs[i];
    }

    for (int i = 0; i < 4; ++i)
    {
        cout << strs[4-i-1] << endl;
    }
    return 0;
}