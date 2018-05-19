#include<stdio.h>

int pre(char s[]);

int main()
{
    char str[100];
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%s", str);
        if(i != 0){
            printf("\n");
        }
        if(pre(str)){
            printf("YES");
        }else{
            printf("NO");
        }
    }

    return 0;
}

int pre(char s[]){
    int n[3] = {0};
    int p = 0, t = 0;
    for(int i = 0, j = 0; s[i] != '\0'; i++){
        if(s[i] == 'A' && p ==0 && t == 0){
            n[j]++;
            continue;
        }else if(s[i] == 'P' && p == 0 && t == 0){
            p++;
            j++;
        }else if(s[i] == 'A' && p == 1 && t == 0){
            n[j]++;
            continue;
        }else if(s[i] == 'T' && p == 1 && t == 0){
            t++;
            j++;
            continue;
        }else if(s[i] == 'A' && p ==1 && t == 1){
            n[j]++;
            continue;
        }else{
            return 0;
        }
    }

    if(n[1] == 0){
        return 0;
    }else if(n[2] != n[1] * n[0]){
        return 0;
    }
    return 1;
}