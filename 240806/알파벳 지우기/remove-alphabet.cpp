#include <iostream>
#include <string>
#include <vector>

using namespace std;


int DeleteChar(string str)
{
    string lastStr;
    for (int i = 0; i < str.size(); ++i)
    {
        if(str[i] >= '0' && str[i] < 'a')
        {
            lastStr += to_string((str[i] -'0'));
        }
    }

    return stoi(lastStr);
}

int main() {
    string str1;
    string str2;

    cin >> str1;
    cin >> str2;

    cout << DeleteChar(str1) +  DeleteChar(str2);

    return 0;
}