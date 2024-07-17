#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    const int book = 3000;
    const int mask = 1000;

    if(n >=book)
        cout << "book";
    else if(n >= mask)
        cout << "mask";
    return 0;
}