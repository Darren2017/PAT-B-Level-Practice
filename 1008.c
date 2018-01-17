#include<stdio.h>

int main() 
{
    int N, M;
    scanf("%d %d", &N, &M);
    while(N < M){
        M = M - N;
    }
    int a[N], i, cnt = N;
    for(i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    for(i = N-M; i <= N-1; i++){
        printf("%d", a[i]);
        cnt--;
        if(cnt > 0){
            printf(" ");
        }
    }
    for(i = 0; i < N - M; i++){
        printf("%d", a[i]);
        cnt--;
        if(cnt > 0){
            printf(" ");
        }
    }

    return 0;
} 