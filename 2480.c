#include <stdio.h>

int main()
{
    int a, b, c;
    int price = 0;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && a == c && b == c)  // a, b, c 모두 같을때
        price = 10000 + a * 1000; 
    else if (a == b && a != c) // a, b 같을때
        price = 1000 + a * 100;
    else if (a == c && a != b) // a, c 같을때
        price = 1000 + a * 100;
    else if (b == c && c != a) // b, c 같을때
        price = 1000 + b * 100;
    else if (a != b && a != c && b != c) // a, b, c 모두 다를때
        {
            // 가장 큰 수 판별
            if (a > b && a > c) // a가 젤 큼
                price = a * 100;
            else if (b > c && b > a) // b가 젤 큼
                price = b * 100; 
            else if (c > a && c > b) // c가 젤 큼
                price = c * 100;
        }
    printf("%d\n", price);
    return 0;
}