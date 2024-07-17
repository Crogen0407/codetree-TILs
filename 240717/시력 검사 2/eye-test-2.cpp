#include <iostream>
using namespace std;

int main() {
    float n;
    cin >> n;

if(n >= 0.5f)
{
    cout << "Middle";
}
else if(n >= 1.0f)
    {
        cout << "High";
    }
    else
    {
        cout << "Low";
    }
    return 0;
}