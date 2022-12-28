#include<stdio.h>
int main (){
    char letter[1000];
    gets(letter);
    letter[0] = toupper(letter[0]);
    printf("%s", letter);
    return 0;
}