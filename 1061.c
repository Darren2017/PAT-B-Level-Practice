#include<stdio.h>

int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    int std[N];  //分值
    int sgol[N];    //标准答案
    int stu[M][N];  //学生答案
    int gol[100] = {0};   //学生得分
    int i, j;
    for( i = 0; i < N; i++){
        scanf("%d", &std[i]);
    }
    for(i = 0; i < N; i++){
        scanf("%d", &sgol[i]);
    }
    for(j = 0; j < M; j++){
        for(i =0; i < N; i++){
            scanf("%d", &stu[j][i]);
        }
    }

    for(j = 0; j < M; j++){
        for(i = 0; i < N; i++){
            if(sgol[i] == stu[j][i]){
                gol[j] += std[i];
            }
        }
    }

    for(i = 0; i < M; i++){
        printf("%d\n", gol[i]);
    }

    return 0 ;
}