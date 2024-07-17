#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n;
    cin >> n;

    cout.precision(4);
    cout << round((n * 30.48) *10.0) /10.0;
    return 0;
}