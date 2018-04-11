#include<stdio.h>

struct student{
    int socre;
    int answer;
    int wrong;
};

int readanswer();

int main()
{
    int N, M, max = 0, nouse;
    struct student student[100];
    scanf("%d %d", &N, &M);
    
    for(int i = 0; i < M; i++){
        scanf("%d %d", &student[i].socre, &nouse);
        student[i].wrong = 0;
        student[i].answer = readanswer();
    }

    for(int i = 0; i < N; i++){
        int score = 0;
        for(int j = 0; j < M; j++){
            while(getchar() != '(');
            if(readanswer() == student[j].answer){
                score += student[j].socre;
            }else if(max < ++student[j].wrong){
                max = student[j].wrong;
            }
            while(getchar() != ')');
        }
        printf("%d\n", score);
    }

    if(max == 0){
        printf("Too simple");
    }else{
        printf("%d", max);
        for(int i = 0; i < M; i++){
            if(student[i].wrong == max){
                printf(" %d", i + 1);
            }
        }
    }

    return 0;
}


int readanswer(){
    char c;
    int cnt, answer = 0;
    scanf("%d", &cnt);
    for(int i = 0; i < cnt; i++){
        while((c = getchar()) == ' ');
        answer |= 1 << (c - 'a');
    }
    return answer;
}