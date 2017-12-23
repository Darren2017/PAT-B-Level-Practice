#include<stdio.h>

int main()
{
    int N;
    char ch;
    scanf("%d %c", &N, &ch);
    int i, j;
    for(i =0; i < (N + 1) / 2; i++){
        for(j = 0; j < N; j++){
            if(i == 0 || i == (N + 1) / 2 - 1 ){
                printf("%c", ch);
                //printf("*");
            }else{
                if(j == 0 || j == N - 1){
                    printf("%c", ch);
                    //printf("*");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}