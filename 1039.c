#include<stdio.h>

int main()
{
    int pro[123] = {0}, need[123] = {0};
    int flag, repro = 0, reneed = 0;
    char input;
    while((input = getchar()) != '\n'){
        pro[input]++;
    }
    while((input = getchar()) != '\n'){
        need[input]++;
    }
    for(int i = 0; i < 123; i++){
        if(pro[i] > need[i]){
            repro += (pro[i] - need[i]);
        }else{
            reneed += (need[i] - pro[i]);
        }
    }
    if(reneed == 0){
        printf("Yes %d", repro);
    }else{
        printf("No %d", reneed);
    }

    return 0;
}