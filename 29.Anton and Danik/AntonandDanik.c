#include<stdio.h>
int main()
{
    int n, a = 0, d = 0, j, i;
    scanf("%d", &n);
    char s[n];
    for(i = 0; i <= n; i++)
    {
        scanf("%c", &s[i]);
    }
    for(j = 0; j <= n; j++)
    {
        if(s[j] == 'A')
        {
            a++;
        }
        if(s[j] == 'D')
        {
            d++;
        }
    }
    if(a>d)
    {
        printf("Anton");
    }
    else if(d>a)
    {
        printf("Danik");
    }
    if(a==d)
    {
        printf("Friendship");
    }
    return 0;
}