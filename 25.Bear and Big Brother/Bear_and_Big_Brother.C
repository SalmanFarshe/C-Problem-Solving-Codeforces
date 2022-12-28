#include<stdio.h>
int main()
{
    int a, b, count = 0;
    scanf("%d %d", &a, &b);
    while (b>=a)
    {
        a = a * 3;
        b = b * 2;
        count++;
    }
    printf("%d", count);
    return 0;
}