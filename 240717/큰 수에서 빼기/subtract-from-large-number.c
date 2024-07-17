#include <stdio.h>

int main() {
    int a, b;
    scanf("%n %n", a, b);
    if(a > b)
        cout << a - b;
    else
        cout << b - a;
    return 0;
}