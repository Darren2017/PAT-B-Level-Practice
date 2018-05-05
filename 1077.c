#include<stdio.h>

int pre(int y, int m){
    if(y >= 0 && y <= m){
        return 1;
    }
    return 0;
}

int main()
{
    int N, M;
    int average, max, min, score, cnt, scoret;

    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; i++){
        average = 0, max = 0, cnt = 0, min = M;
        for(int j = 0; j < N; j++){
            scanf("%d", &score);
            average += score;
            if(pre(score, M) && j != 0){
                if(score > max){
                    max = score;
                }
                if(score < min){
                    min = score;
                }
            }
            if(!pre(score, M)){
                cnt++;
                average -= score;
            }
            if(j == 0){
                scoret = score;
            }
        }
        double average1 = 1.0 * (average - min - max - scoret) / (N - 3 -cnt);
        average = (average1 + scoret) / 2.0 + 0.5;
        printf("%d\n", average);
    }

    return 0;
}