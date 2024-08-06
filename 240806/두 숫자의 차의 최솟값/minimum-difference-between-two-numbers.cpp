#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers;
    vector<int> charis;
    for(int i = 0; i < n; ++i)
    {
        int number;
        cin >> number;
        numbers.push_back(number);
    }

    for (int i = 0; i < n-1; ++i)
    {
        charis.push_back(numbers[i+1] - numbers[i]);
    }

    int min = 100000;
    for(int i = 0; i < charis.size(); ++i)
    {
        if(min > charis[i])
        {
            min = charis[i];
        }
    }

    cout << min;

    return 0;
}