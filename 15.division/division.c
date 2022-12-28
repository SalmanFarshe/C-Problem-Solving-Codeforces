#include<stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        if(n >= 1900)
        {
            printf("Division 1\n"); 
        }
        else if(n >= 1600 && n <= 1899)
        {
            printf("Division 2\n");
        }
        else if(n >=1400 && n <= 1599)
        {
            printf("Division 3\n");
        }
        else
        {
            printf("Division 4\n");
        }
    }
    return 0;
}