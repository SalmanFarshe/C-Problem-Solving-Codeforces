#include<stdio.h>
int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    char s[n+1];
    for (int i = 0; i <= n; i++)
    {
        scanf("%c", &s[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        if (s[i] == s[i+1])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}