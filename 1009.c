#include<stdio.h>
#include<string.h>

int main()
{
    char str[81];
    int i;
    gets(str);              //gets()与scanf的区别是gets可以读入空格，而scanf遇到空格表示读取结束
    //scanf("%s", str);    
    for(i = strlen(str) - 1; i >= 0; i--){
        if(str[i] == ' '){
            printf("%s", &str[i + 1]);
            printf("%c", str[i]);
            str[i] = '\0';
        }
        if(i == 0){
            printf("%s", &str[i]);
        }
    }

    return 0;
}