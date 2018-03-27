#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

char fir[][14] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
char sec[][13] = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

int Mars2Earth(char s[])
{
    if(s)
    {
        for(int i = 0; i < 13; i++)         
            if(strcmp(s, fir[i]) == 0)
                return i;
        for(int i = 1; i < 13; i++)         
            if(strcmp(s, sec[i - 1]) == 0)
                return i * 13;
    }
    return 0;
}

int main()
{
    int n;
    char ch[10];
    scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++){
        gets(ch);
        if(isalpha(ch[0])){
            int result = 0;
            result += Mars2Earth(strtok(ch, " \n"));
            result += Mars2Earth(strtok(NULL, "\n"));
            printf("%d\n", result);
        }else{
            int num = 0, j = 0;
            while(ch[j]){
                num = num * 10 + ch[j] - '0';
                j++;
            }
            if((num / 13) != 0){
                printf("%s", sec[(num / 13) - 1]);
                if((num % 13) == 0){
                    printf("\n");
                    continue;
                }else{
                    printf(" ");
                }
            }
            printf("%s\n", fir[num % 13]);
        }
    }

    return 0;
}