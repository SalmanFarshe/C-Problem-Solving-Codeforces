#include<stdio.h>
int main()
{
    int n, h;
    scanf("%d %d", &n, &h);
    int a[n], result[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > h)
        {
            result[i] = 2;
        }
        else
        {
            result[i] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += result[i];
    }
    printf("%d", sum);
}