#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> q;

    
    for(int i =0; i < 10; i++)
    {
        string input;

        cin >> input;

        q.push(input);        
    }

    while(q.size() != 0)
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}