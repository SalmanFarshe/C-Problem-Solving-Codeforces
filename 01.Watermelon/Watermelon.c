// 800 dificulty
#include<stdio.h>
int main(){
    int Watermelon;
    scanf("%d", &Watermelon);
    if(Watermelon % 2 == 0)
    {
        if (Watermelon == 2){
            printf("NO");
        }
        else{
            printf("YES");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}