#include<stdio.h>

int main()
{
    int M, N, A, B, S;
    scanf("%d %d %d %d %d", &M, &N, &A, &B, &S);
    int ch[500][500] = {0};
    int i, j;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            scanf("%d", &ch[i][j]);
        }
    }
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            if(ch[i][j] <= B && ch[i][j] >= A){
                printf("%03d", S);
                if(j != N - 1){
                    printf(" ");
                }
            }else{
                printf("%03d", ch[i][j]);
                if(j != N - 1){
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}