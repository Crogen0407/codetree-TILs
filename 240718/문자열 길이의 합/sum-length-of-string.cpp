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
        if (strs[i][0] == 'a')
                aCount++;
                
        for(int j = 0; j < strs[i].size(); j++)
        {
            
            

            ++charCount;
        }
    }

    cout << charCount<< " " << aCount;

    return 0;
}