#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    int num[124] = {0};
    while((ch = getchar()) != '\n'){
        if(ch == 'P' || ch == 'A' || ch == 'T' ||ch == 'e' || ch == 's' || ch == 't'){
            num[ch]++;
        }
    }
    while(num['P'] || num['A'] || num['T'] || num['e'] || num['s'] || num['t']){
        if(num['P'] > 0){
            printf("P");
            num['P']--;
        }
        if(num['A'] > 0){
            printf("A");
            num['A']--;
        }
        if(num['T'] > 0){
            printf("T");
            num['T']--;
        }
        if(num['e'] > 0){
            printf("e");
            num['e']--;
        }
        if(num['s'] > 0){
            printf("s");
            num['s']--;
        }
        if(num['t'] > 0){
            printf("t");
            num['t']--;
        }
    }
    return 0;
}