#include<stdio.h>
#include<string.h>
int main()
{
    int count = 0, i, j;
    char user_name[101], temp;
    gets(user_name);
    for (i = 0; user_name[i] != '\0'; i++)
    {
        for (j = i + 1; user_name[j] != '\0'; j++)
        {
            if (user_name[i] > user_name[j])
            {
                temp = user_name[i];
                user_name[i] = user_name[j];
                user_name[j] = temp;
            }
        }
    }
    for (i = 0; user_name[i] != '\0'; i++)
    {
        if (user_name[i] != user_name[i+1])
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}