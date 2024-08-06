#include <iostream>
#include <vector>
#include <string>
using namespace std;

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

    int numberCnt = 1;
    int resultNumberSum = 0;
    for (int i = 0; i < numberCount(sumNumber)-1; ++i)
    {
        cout << resultNumberSum;
        resultNumberSum = (sumNumber/numberCnt)%10;
        numberCnt *= 10;
    }
    cout << (sumNumber/numberCnt)%10;
    return 0;
}