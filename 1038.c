#include<stdio.h>

int main()
{
    int N, K, gola, m;
    int score[101] = {0};
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &gola);
        score[gola]++;
    }
    scanf("%d", &K);
    for(int i = 0; i < K; i ++){
        scanf("%d", &m);
        printf("%d", score[m]);
        printf("%c", i < K - 1 ? ' ' : '\0');
    }
    
    return 0;
}