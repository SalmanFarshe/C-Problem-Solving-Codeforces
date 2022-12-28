#include<stdio.h>
#include<string.h>
int main()
{
    int x, i = 0, j = 0;
    char str1[101];
    char str2[101];
        gets(str1);
        gets(str2);
        while(str1[i] != '\0')
        {
            str1[i] = tolower(str1[i]);
            i++;
        }
        while(str2[j] != '\0')
        {
            str2[j] = tolower(str2[j]);
            j++;
        }
        x = strcmp(str1, str2);
        printf("%d\n", x);
    return 0;
}