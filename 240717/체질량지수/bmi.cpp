#include <iostream>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    int result = w/((h/100)*(h/100));
    cout << result;

    if(result >= 25)
        cout << "Obesity";

    return 0;
}