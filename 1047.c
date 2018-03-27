#include<stdio.h>

int main()
{
    int n;
    scanf ("%d", &n);
    char ch[10020];
    int score[10005] = {0};
    for (int i = 0; i < n; i++){        //读入队伍编号和队员编号，将队伍编号转换为整型
        int j = 0;
        int team = 0, perscore = 0;
        scanf("%s", ch);
        j = 0;
        while(ch[j] != '-'){
            team = team * 10 + ch[j] - '0';
            j++;
        }
        scanf("%d", &perscore);     //读入队员成绩，并加到相应的队伍里
        getchar();
        score[team] += perscore;
    }
    int max = 0;                    //查找总成绩最高的队伍
    for(int i = 1; i < 10001; i++){
        if(score[max] < score[i]){
            max = i;
        }
    }
    printf("%d %d", max, score[max]);
    return 0;
}