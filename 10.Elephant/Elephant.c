#include<stdio.h>
int main(){
    int x, result, e_r, e_m, d_r, d_m, c_r, c_m, b_r, b_m, a_r, a = 1, b = 2, c = 3, d = 4, e = 5;
    scanf("%d", &x);
    e_r = x / e;
    e_m = x % e;
    d_r = e_m / d;
    d_m = e_m % d;
    c_r = d_m / c;
    c_m = d_m % c;
    b_r = c_m / b;
    b_m = c_m % b;
    a_r = b_m / a;
    result = e_r + d_r + c_r + b_r + a_r;
    printf("%d", result);
    return 0;
}