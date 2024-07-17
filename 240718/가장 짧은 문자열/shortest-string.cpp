#include <iostream>
using namespace std;

int main() {
    string s1;
    string s2;
    string s3;

    cin >> s1 >> s2 >> s3;

    string minStr;
    string maxStr;

    minStr = s1.size() > s2.size() ? (s3.size() > s2.size() ? s2 : s3) : (s1.size() > s3.size() ? s3 : s1);
    maxStr = s1.size() < s2.size() ? (s3.size() < s2.size() ? s2 : s3) : (s1.size() < s3.size() ? s3 : s1);

    cout << maxStr.size() - minStr.size();

    return 0;
}