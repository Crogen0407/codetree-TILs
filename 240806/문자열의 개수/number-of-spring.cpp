#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> strs;

    while(true)
    {
        string str;
        cin >> str;
        if(str == "0")
        {
            break;
        }
        strs.push_back(str);
    }

    cout << strs.size() << endl;

    for(int i = 0; i < strs.size(); ++i)
    {
        if (i%2==1)
            continue;
        else
            cout << strs[i] << endl;
    }

    return 0;
}