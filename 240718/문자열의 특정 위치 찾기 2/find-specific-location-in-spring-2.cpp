#include <iostream>
#include <queue>
using namespace std;

int main() {

    char c;
    string strs[] = {"apple", "banana", "grape", "blueberry", "orange"};
    queue<string> st;
    cin >> c;
    
    int sum = 0;
    for(int i = 0; i < 5; ++i)
    {
        bool isContain = false;
        for(int j = 0; j < strs[i].size(); ++j)
        {
            if(strs[i][j] == c && (j == 2 || j == 3))
                isContain = true;
            
        }
        if(isContain){
            st.push(strs[i]);
            ++sum;
        }    
    }

    for(int i = 0; i < sum; ++i)
    {
        cout << st.front();
        cout << endl;
        st.pop();
    }
    cout << sum;

    return 0;
}