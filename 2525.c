#include <stdio.h>

int main()
{
    int hour, minute, time;
    scanf("%d %d", &hour, &minute);
    minute = hour * 60 + minute;
    scanf("%d", &time);
    minute = minute + time;
    hour = minute / 60;
    if (hour >= 24)
    {
        hour = hour -24;
    }
    minute = minute % 60;
    printf("%d %d \n", hour, minute);
    return 0;
}