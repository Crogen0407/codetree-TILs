#include <iostream>
using namespace std;

int main() {
    float n;
    cin >> n;

    if(n >= 1.0f)
    {
        cout << "High";
    }
    else if(n >= 0.5f)
    {
        cout << "Middle";
    }
    else
    {
        cout << "Low";
    }
    return 0;
}