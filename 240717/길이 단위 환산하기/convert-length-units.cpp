#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n;
    cin >> n;

    cout << round((n * 30.48) *10) /10;

    return 0;
}