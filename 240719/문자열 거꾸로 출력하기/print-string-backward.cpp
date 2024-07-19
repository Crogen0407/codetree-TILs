#include <iostream>
using namespace std;

int main() {

    while(true)
    {
        string input;

        cin >> input;

        if(input == "END")
            break;

        for(int i = input.size(); i >= 0; --i)
        {
            if(input[i] == ' ' || input[i] =='\0') continue;
            cout << input[i];   
        }
        cout << '\n';
    }
    
    return 0;
}