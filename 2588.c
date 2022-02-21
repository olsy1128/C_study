#include <stdio.h>

int main(void)
{
    int a, b;
    int n1, n2, n3;
    int result;
    scanf("%d %d", &a, &b);
    n1 = (b % 10) * a;
    n2 = (b / 10 % 10) * a;
    n3 = (b / 100) * a;
    result = n1 + n2 * 10 + n3 * 100;
    printf("%d\n%d\n%d\n%d\n", n1, n2, n3, result);
    return 0;
}