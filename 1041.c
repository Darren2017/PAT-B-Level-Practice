#include<stdio.h>

struct student{
    long num;
    int a;
    int b;
};

int main()
{
    struct student students[1000];
    int N;
    scanf("%d", &N);
    int i, j;
    for(i = 0; i < N; i++){
        scanf("%ld %d %d", &students[i].num, &students[i].a, &students[i].b);
    }

    int M;
    int search[1000];
    scanf("%d", &M);
    for(i = 0; i < M; i++){
        scanf("%d", &search[i]);
    }

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            if(search[i] == students[j].a){
                printf("%ld %d\n",students[j].num, students[j].b);
            }
        }
    }

    return 0;
}