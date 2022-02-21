#include <stdio.h>

int main(void)
{
    double a, b;
    double result = 0;
    scanf("%lf %lf", &a, &b); 
    result = a / b;
    printf("%.9f\n", result);
    return 0;
}