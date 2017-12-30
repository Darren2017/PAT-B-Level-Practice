#include<stdio.h>

struct stu{
    char name[11];
    char num[11];
    int gola;
};

int main()
{
    int n, i;
    scanf("%d", &n);
    struct stu student[n];
    for(i = 0; i < n; i++){
        scanf("%s %s %d", student[i].name, student[i].num, &student[i].gola);
    }
    int max = 0, min = 0;
    for(i = 0; i < n; i++){
        if(student[max].gola < student[i].gola){
            max = i;
        }
    }
    for(i = 0; i < n; i++){
        if(student[min].gola > student[i].gola){
            min = i;
        }
    }
    printf("%s %s\n", student[max].name, student[max].num);
    printf("%s %s\n", student[min].name, student[min].num);

    return 0;
}