// 800 dificulty
#include<stdio.h>
int main(){
    int n, count = 0, Petya, Vasya , Tonya;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {   
        scanf("%d%d%d", &Petya, &Vasya, &Tonya);
        if ((Petya == 1 && Vasya == 1) || (Vasya == 1 && Tonya == 1) || (Petya == 1 && Tonya == 1))
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}