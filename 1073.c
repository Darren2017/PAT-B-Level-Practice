#include<stdio.h>

struct question{
    int socre;
    int answernum;
    int rightnum;
    int answer;
    int wrong[5];
};

int readanswer();

int main()
{
    int M, N, wrong_max = 0;
    struct question question[100];
    scanf("%d %d", &N, &M);

    for(int i = 0; i < M; i++){
        scanf("%d %d", &question[i].socre, &question[i].answernum);
        question[i].answer = readanswer();
        for(int j = 0; j < 5; j++){
            question[i].wrong[j] = 0;
        }
    }

    for(int i = 0; i < N; i++){
        double score = 0.0;
        int answer, testanser[100];
        for(int j = 0; j < M; j++){
            while(getchar() != '(');
            answer = readanswer();
            testanser[j] = answer ^ question[j].answer;

            if(testanser[j] == 0){
                score += question[j].socre;
            }else if((testanser[j] | question[j].answer) == question[j].answer){
                score += 0.5 * question[j].socre;
            }

            for(int k = 0; k < 5; k++){
                question[j].wrong[k] += testanser[j] >> k & 1;
                if(question[j].wrong[k] > wrong_max){
                    wrong_max = question[j].wrong[k];
                }
            }
            while(getchar() != ')');
        }
        printf("%0.1f\n", score);
    }
    if(wrong_max == 0){
        printf("Too simple");
    }else{
        for(int i = 0; i < M; i++){
            for(int j = 0; j < 5; j++){
                if(question[i].wrong[j] == wrong_max){
                    printf("%d %d-%c\n", wrong_max, i + 1, j + 'a');
                }
            }
        }
    }

    return 0;
}

int readanswer()
{
    char c;
    int answer = 0, count;
    
    scanf("%d", &count);
    for(int i = 0; i < count; i++)
    {
        while((c = getchar()) == ' ');
        answer |= 1 << (c - 'a');
    }
    return answer;
}