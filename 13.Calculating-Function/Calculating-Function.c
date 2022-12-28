#include<stdio.h>
int main()
{
    long long int n,x;
    scanf("%lli",&n);
    n%2==0 ? printf("%lli", n/2): printf("%lli", -(n+1)/2);
    return 0;
}