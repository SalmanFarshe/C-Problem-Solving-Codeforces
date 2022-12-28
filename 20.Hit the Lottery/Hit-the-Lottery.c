#include<stdio.h>
int main()
{
    long long int n;
    int temp = 0, result = 0, one = 1, five = 5, ten = 10, twenty = 20, hundred = 100;
    scanf("%lld", &n);
    hundred = n / 100;
    temp = n % 100;
    twenty = temp / 20;
    temp = temp % 20;
    ten = temp / 10;
    temp = temp % 10;
    five = temp / 5;
    temp = temp % 5;
    one = temp / 1;
    result = one + five + ten + twenty + hundred;
    printf("%d", result);
    return 0;
}