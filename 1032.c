#include<stdio.h>

int max(int score[], int sch[], int n){
    int s = 0;
    for(int j = 0; j < n; j++){
        if(score[j] > score[s]){
            s = j;
        }
    }
    return s;
}

int main()
{   
    int sch[100000] = {0};
    int score[100000] = {0};
    int num, gola, schnum;
    scanf("%d" , &num);
    for(int i = 0; i < num; i++){
        scanf("%d %d", &schnum, &gola);
        sch[schnum - 1] = schnum;
        score[schnum - 1] += gola;
    }
    
    int s = max(score, sch, num);

    printf("%d %d", s + 1, score[s]);

    return 0;
}