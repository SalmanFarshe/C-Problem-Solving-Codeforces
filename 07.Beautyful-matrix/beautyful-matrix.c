#include<stdio.h>
int main()
{
    int mat[5][5], i, j, result = 0, sum;
    for(i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if (mat[0][0] == 1)
            {
                result = 4;
            }
            else if (mat[0][1] == 1)
            {
                result = 3;
            }
            else if (mat[0][2] == 1)
            {
                result = 2;
            }
            else if (mat[0][3] == 1)
            {
                result = 3;
            }
            else if (mat[0][4] == 1)
            {
                result = 4;
            }
            else if (mat[1][0] == 1)
            {
                result = 3;
            }
            else if (mat[1][1] == 1)
            {
                result = 2;
            }
            else if (mat[1][2] == 1)
            {
                result = 1;
            }
            else if (mat[1][3] == 1)
            {
                result = 2;
            }
            else if (mat[1][4] == 1)
            {
                result = 3;
            }
            else if (mat[2][0] == 1)
            {
                result = 2;
            }
            else if (mat[2][1] == 1)
            {
                result = 1;
            }
            else if (mat[2][2] == 1)
            {
                result = 0;
            }
            else if (mat[2][3] == 1)
            {
                result = 1;
            }
            else if (mat[2][4] == 1)
            {
                result = 2;
            }
            else if (mat[3][0] == 1)
            {
                result = 3;
            }
            else if (mat[3][1] == 1)
            {
                result = 2;
            }
            else if (mat[3][2] == 1)
            {
                result = 1;
            }
            else if (mat[3][3] == 1)
            {
                result = 2;
            }
            else if (mat[3][4] == 1)
            {
                result = 3;
            }
            else if (mat[4][0] == 1)
            {
                result = 4;
            }
            else if (mat[4][1] == 1)
            {
                result = 3;
            }
            else if (mat[4][2] == 1)
            {
                result = 2;
            }
            else if (mat[4][3] == 1)
            {
                result = 3;
            }
            else if (mat[4][4] == 1)
            {
                result = 4;
            }
        }
    }
    printf("%d", result);
    return 0;
}
