#include<stdio.h>
int main()
{
    int number, num1, num2, num3;
    scanf("%d", &number);
    for(int  i = 0; i < number; i++)
    {
        scanf("%d %d %d", &num1, &num2, &num3);
        if((num1 + num2) == num3 || (num2 + num3) == num1 || (num3 + num1) == num2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}