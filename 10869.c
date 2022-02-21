#include <stdio.h>

int main(void)
{
    int a, b;
    int plus, minus, mul, div, rest= 0;
    scanf("%d %d", &a, &b); 
    plus = a + b;
    minus = a - b;
    mul = a * b;
    div = a / b;
    rest = a % b;
    printf("%d\n%d\n%d\n%d\n%d\n", plus, minus, mul, div, rest);
    return 0;
}