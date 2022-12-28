#include<stdio.h>
int main()
{
    int n, x = 0;
    char bitpp[4];
    scanf("%d", &n);
    for (int i = 0; i < n + 1; i++)
    {
        gets(bitpp);        
        if ((bitpp[0] == '+' && bitpp[1] == '+') && (bitpp[2] == 'X' || bitpp[2] == 'x'))
        {
            x = x + 1;
        }
        else if ((bitpp[1] == '+' && bitpp[2] == '+') && (bitpp[0] == 'X' || bitpp[0] == 'x'))
        {
            x = x + 1;
        }
        else if ((bitpp[0] == '-' && bitpp[1] == '-') && (bitpp[2] == 'X' || bitpp[2] == 'x'))
        {
            x = x - 1;
        }
        else if ((bitpp[1] == '-' && bitpp[2] == '-') && (bitpp[0] == 'X' || bitpp[0] == 'x'))
        {
            x = x - 1;
        }
        else
        {
            x = 0;
        }
        
    }
    printf("%d", x);
    return 0;
}