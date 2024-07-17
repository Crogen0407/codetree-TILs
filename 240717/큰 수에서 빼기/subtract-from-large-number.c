#include <stdio.h>

int main() {
    int a, b;
    scanf("%n %n", a, b);
    if(a > b)
        printf("%n", a - b);
    else
        printf("%n",  b - a);
    return 0;
}