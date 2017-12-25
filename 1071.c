#include<stdio.h>

int main()
{
    int T, K;
    scanf("%d %d", &T, &K);
    int n1, b, t, n2;
    int i;
    int lt = T;
    for(i = 0; i < K; i++){
        scanf("%d %d %d %d", &n1, &b, &t, &n2);
        if(t > lt){
            printf("Not enough tokens.  Total = %d.\n", lt);
        }else{
            if((b == 1 && n2 > n1) || (b == 0 && n2 < n1)){
                    lt += t;
                    printf("Win %d!  Total = %d.\n", t, lt);
            }else{
                    lt -= t;
                    printf("Lose %d.  Total = %d.\n", t, lt);
                    if(lt == 0){
                        printf("Game Over.\n");
                        break;
                    }
            }
        }
    }
    return 0;
}