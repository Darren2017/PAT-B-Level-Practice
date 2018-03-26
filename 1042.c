#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int num[280] = {0};
    char ch;
    while((ch = getchar()) != '\n'){
        if(isalpha(ch)){
            ch = tolower(ch);
            num[ch]++;
        }
    }
    int max = 0;
    for(int i = 65; i < 123; i++){
        if(max < num[i]){
            max = num[i];
        }
    }
    for(int i = 97; i < 123; i++){
        if(num[i] == max){
            printf("%c %d", i, num[i]);
            break;
        }
    }

    return 0;
}