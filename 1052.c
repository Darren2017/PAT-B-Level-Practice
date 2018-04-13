#include<stdio.h>
#include<string.h>

void handle(int a, char str[]);

int main()
{
    char c, s[3][10][5];
    int cnt[3] = {0};
    for(int i = 0; i < 3; i++){
        int j = 0;
        while((c = getchar()) != '\n'){
            if(c == '['){
            scanf("%[^]]", s[i][j++]);
            cnt[i]++;
            }
        }
    }
    printf("%d", cnt[1]);
    int N, m;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        static char result[100] = "";
        scanf("%d", &m);        //左手
        if(m > 0 && m <= cnt[0]){
            //printf("读取");
            strcpy(result, s[0][m - 1]);
            //printf("%s\n", result);
        }else{
            printf("Are you kidding me? @\\/@\n");
            continue;
        }
        scanf("%d", &m);        //左眼
        if(m > 0 && m <= cnt[1]){
           // printf("读取");
            strcat(result, "(");
            strcat(result, s[1][m - 1]);
            //printf("%s\n", result);
        }else{
            printf("Are you kidding me? @\\/@\n");
            continue;
        }
        scanf("%d", &m);        //口
        if(m > 0 && m <= cnt[2]){
            //printf("读取");
            strcat(result, s[2][m - 1]);
            //printf("%s\n", result);
        }else{
            printf("Are you kidding me? @\\/@\n");
            continue;
        }
        scanf("%d", &m);        //右眼
        if(m > 0 && m <= cnt[1]){
            //printf("读取");
            strcat(result, s[1][m - 1]);
            strcat(result, ")");
            //printf("%s\n", result);
        }else{
            printf("Are you kidding me? @\\/@\n");
            continue;
        }
        scanf("%d", &m);        //右手
        if(m > 0 && m <= cnt[0]){
            //printf("读取");
            strcat(result, s[0][m - 1]);
            //printf("%s\n", result);
        }else{
            printf("Are you kidding me? @\\/@\n");
            continue;
        }
        printf("%s\n", result);
    }

    return 0;
}