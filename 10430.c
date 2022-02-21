#include <stdio.h>

int main(void)
{
    int a, b, c;
    int result1, result2, result3, result4= 0;
    scanf("%d %d %d", &a, &b, &c); 
    result1 = (a + b) % c;
    result2 = ((a % c) + (b % c)) % c;
    result3 = (a * b) % c;
    result4 = ((a % c) * (b % c)) % c;
    printf("%d\n%d\n%d\n%d\n", result1, result2, result3, result4);
    return 0;
}