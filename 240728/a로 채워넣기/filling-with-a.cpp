#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    for(size_t i = 0; i < str.size(); i++)
    {
        if(i==1 || str.size() - i == 2){
            cout << "a";
        }
        else{
            cout << str[i];
        }

    }
    return 0;
}