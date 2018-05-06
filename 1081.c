#include<stdio.h>
#include<string.h>
#include<ctype.h>

void prestring(char a[]);

int main()
{
    int N;
    scanf("%d", &N);
    getchar();
    for(int i = 0; i < N; i++){
        char in[101];
        gets(in);
        int len = strlen(in);
        if(len < 6){
            printf("Your password is tai duan le.\n");
            continue;
        }
        prestring(in);
    }

    return 0;
}

void prestring(char a[]){
    int num = 0, alp = 0, i = 0;
    while(a[i]){
        if(isdigit(a[i])){
            num++;
        }else if(isalpha(a[i])){
            alp++;
        }else if(a[i] == '.'){
            i = i;
        }else{
            printf("Your password is tai luan le.\n");
            return;
        }
        i++;
    }
        if(num == 0){
            printf("Your password needs shu zi.\n");
        }else if(alp == 0){
            printf("Your password needs zi mu.\n");
        }else{
            printf("Your password is wan mei.\n");
        }
}