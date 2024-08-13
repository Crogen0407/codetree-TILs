#include <iostream>
#include <vector>
using namespace std;

int main() {

    int count;
    cin >> count;

    vector<int> number;

    for(int i = 0; i < count; ++i)
    {
        int n;
        cin >> n;
        number.push_back(n);
    }
    for(int i = 0; i < count; ++i)
    {
        cout << number[i] * number[i] << " ";
    }

    return 0;
}