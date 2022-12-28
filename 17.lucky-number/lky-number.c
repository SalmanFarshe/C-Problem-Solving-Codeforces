#include<stdio.h>
#include<string.h>
int main()
{
    int count1 = 0, count2 = 0;
    char n[20];
    scanf("%s", &n);
    for (int i = 0; i < strlen(n); i++)
    {
        if (n[i] == '7')
        {
            count1++;
        }
        else if(n[i] == '4')
        {
            count2++;
        }
        else
        {
            count1 = count1;
            count2 = count2;
        }
    }
    if (count1 + count2 == 4 || count1 + count2 == 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}