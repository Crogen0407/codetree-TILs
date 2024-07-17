#include <iostream>
using namespace std;

int main() {
    string s1;
    string s2;

    cin >> s1 >> s2;

    cout << (s1.size() > s2.size() ? s1 : s2);
    cout << " ";
    cout << (s1.size() > s2.size() ? s1.size() : s2.size());
    return 0;
}