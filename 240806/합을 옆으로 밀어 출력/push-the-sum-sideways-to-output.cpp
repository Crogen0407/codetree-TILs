#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers;

    for (int i = 0; i < n; ++i)
    {
        int number;
        cin >> number;
        numbers.push_back(number);
    }

    int sumNumber = 0;

    for (int i = 0; i < numbers.size(); ++i)    
    {
        sumNumber += numbers[i];
    }

    string sumString = to_string(sumNumber);

    string lastString;

    for (int i = 1; i < sumString.size(); ++i)
    {
        cout << sumString[i];
    }
    cout << sumString[0];


    return 0;
}