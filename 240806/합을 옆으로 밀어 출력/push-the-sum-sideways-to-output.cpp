#include <iostream>
#include <vector>
#include <string>
using namespace std;

int pow(int a, int b)
{
    int result = 1;
    for(int i = 0; i < b; i++)
    {
        result *= a;
    }

    return result;
}

int numberCount(int num)
{
    int count = 0;
    while(num > 0)
    {
        num/=10;
        count++;
    }
    return count;
}

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

    for (int i = 2; i < numberCount(sumNumber)+1; ++i)
    {
        cout << (sumNumber/pow(10, numberCount(sumNumber)-i))%10;
    }
    cout << (sumNumber/pow(10, numberCount(sumNumber)-1))%10;

    return 0;
}