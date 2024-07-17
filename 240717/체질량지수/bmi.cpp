#include <iostream>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    int result = (10000 * w) / (h * h);
    cout << result;

    if(result >= 25)
        cout << "Obesity";

    return 0;
}