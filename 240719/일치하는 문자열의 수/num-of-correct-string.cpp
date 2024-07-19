#include <iostream>
using namespace std;

int main() {

    int n;
    string A;

    cin >> n;
    cin >> A;

    int sum = 0;

    for(int i = 0; i < n; ++i)
    {
        string input;
        cin >> input;

        if(input == A)
            ++sum;
    }

    cout << sum;

    return 0;
}