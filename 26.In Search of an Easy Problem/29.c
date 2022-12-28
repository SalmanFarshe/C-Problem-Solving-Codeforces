#include<stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int number[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
        if (number[i] == 1)
        {
            count++;
            break;
        }   
    }
    if (count == 1)
    {
        printf("HARD");   
    }
    else
    {
        printf("EASY");
    }
    return 0;
}