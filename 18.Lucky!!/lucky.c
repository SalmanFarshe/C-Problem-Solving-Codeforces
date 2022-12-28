#include<stdio.h>
int main()
{
    char ticket[6];
    int n, sum1 = 0, sum2 = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &ticket);
        sum1 = ticket[0] + ticket[1] + ticket[2];
        sum2 = ticket[3] + ticket[4] + ticket[5];
        if (sum1 == sum2)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}