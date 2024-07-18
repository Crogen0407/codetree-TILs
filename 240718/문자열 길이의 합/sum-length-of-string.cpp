#include <iostream>
using namespace std;

int main() {

    string strs[10];
    int n;

    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        cin >> strs[i];
    }


    int charCount = 0;
    int aCount = 0;
    for (int i = 0; i < n; ++i)
    {
        for(int j = 0; j < strs[i].size(); j++)
        {
            if (strs[i][j] == 'a')
                aCount++;
            

            ++charCount;
        }
    }

    cout << charCount<< " " << aCount;

    return 0;
}