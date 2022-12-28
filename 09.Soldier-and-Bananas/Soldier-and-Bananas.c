#include<stdio.h>
int main(){
    int k, n, w, default_result = 0, sum = 0, result = 0, sum2 = 0, result2 = 0;
    scanf("%d %d %d", &k, &n, &w);
    
    for (int i = 1; i <= w; i++)
    {
        sum = k * i;
        result += sum;
    }
    // printf("%d", result);

    if (result > n)
    {
        for (int i = 1; i <= w; i++)
        {
            sum2 = k * i;
            result2 += sum2;
        }    
        printf("%d", result2 - n);
    }
    else
    {
        printf("%d", default_result);
    }
    return 0;
}