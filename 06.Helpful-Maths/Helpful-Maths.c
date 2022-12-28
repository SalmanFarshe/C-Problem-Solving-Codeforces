#include<stdio.h>
int main(){
    int temp;
    char arr[100];
    gets(arr);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        for (int j = i + 1; arr[j] != '\0'; j++)
        {
            if (arr[i] > arr[j])
            {
                if (arr[i] != '+' && arr[j] != '+') 
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}