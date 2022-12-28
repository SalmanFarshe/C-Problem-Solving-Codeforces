#include<stdio.h>
#include<string.h>
int main()
{
    char name1[101], name2[101], reverse1[101];
    gets(name1);
    gets(name2);
    int length = strlen(name1), count = 0;
    for (int i = 0; i <= length; i++)
    {
        reverse1[i] = name1[length - i -1];
        if (name2[i] == reverse1[i])
        {
            count++;
        }
    }
    if ((count - 1) == length)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}