#include<stdio.h>
int main(){
    int perticepent, kth_position, scores[52], postn = 0;
    scanf("%d %d", &perticepent, &kth_position);
    for (int i = 1; i <= perticepent ; i++)
    {
        scanf("%d", &scores[i]);
    }
    for (int i = 1; i <= perticepent; i++)
    {
        if (scores[kth_position] >= 0)
        {
            if (scores[kth_position] == 0)
            {
                if (scores[i] > scores[kth_position])
                {
                    postn++;
                }
            }
            else
            {
                if (scores[i] >= scores[kth_position])
                {
                    postn++;
                }
            }
            
        }
        
    }
    printf("%d\n", postn);
    return 0;
}