#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int length, count_lower = 0, count_upper = 0;
    char word[101], upper, lower;
    gets(word);
    length = strlen(word);
    for (int i = 0; i < length; i++)
    {
        
        if(toupper(word[i]) == word[i])
        {
            count_upper++;
        }
        else
        {
            count_lower++;
        }
    }
    if (count_lower == count_upper)
    {
        for (int i = 0; i < length; i++)
        {
            word[i] = tolower(word[i]);
        }
        printf("%s", word);
        
    }
    else if(count_lower > count_upper)
    {
        for (int i = 0; i < length; i++)
        {
            word[i] = tolower(word[i]);
        }
        printf("%s", word);
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            word[i] = toupper(word[i]);
        }
        printf("%s", word);
    }
    return 0;
}