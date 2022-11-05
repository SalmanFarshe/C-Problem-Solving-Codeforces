// 800 dificulty
#include<stdio.h>
int main(){
    int length, lines;
    char inp[100];
    scanf("%d", &lines);

    for(int i = 0; i <= lines; i++)
    {
        gets(inp);
        length = 0;
        // calculating array length
        while (inp[length] != '\0')
        {
            length++;
        }
        // printing result
        if(length > 10)
        {
            printf("%c%d%c\n", inp[0],length-2,inp[length - 1]);
        }
        else
        {
            printf("%s\n", inp);
        }
    }
    return 0;
}