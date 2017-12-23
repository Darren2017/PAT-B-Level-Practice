#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int A[N][2];
    int B[N][2];
    int wa = 0, wb = 0;
    int i, j;
    for(i = 0; i < N; i++){
        scanf("%d %d %d %d", &A[i][0], &A[i][1], &B[i][0], &B[i][1]);
    }
    for(i = 0; i < N; i++){
        if(A[i][0] + B[i][0] == A[i][1]){
            if(A[i][0] + B[i][0] != B[i][1]){
                wb++;
            }
        }else{
            if(A[i][0] + B[i][0] == B[i][1]){
                wa++;
            }
        }
    }
    printf("%d %d", wa, wb);

    return 0;
}