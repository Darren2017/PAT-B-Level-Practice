#include<stdio.h>
#include<string.h>
#include<ctype.h>

int pre(char a){    //
    if(a >= 'A' && a <= 'Z'){
        return 1;
    }
    else{
        return 0;
    }
}
int pre1(char a){
    if((a >= a - 'A' && a <= 'Z') || (a >= 'a' && a <= 'z') || (a >= '0' && a <= '9')){
        return 1;
    }
    else{
        return 0;
    }
}
int pre2(char a){
    if((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')){
        return 1;
    }else{
        return 0;
    }    
}
int pre3(char a){
    if(a >= '0' && a <= '9' ){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    char str[4][61];
    char date[][5] = {"MON ", "TUE ", "WEN ", "THU ", "FRI ", "SAT ", "SUN "};
    scanf("%s %s %s %s", str[0], str[1], str[2], str[3]);
    int cnt = 0;
    for(int i = 0; i <= strlen(str[0]); i++){
        if(str[0][i] == str[1][i]){
            if(pre2(str[0][i])){
                if(cnt == 0){
                    if (pre(str[0][i])){
                        cnt++;
                        int day = (int)(str[0][i] - 'A' + 1);
                        printf("%s", date[day - 1]);
                    }
                    continue;
                }
            }    
            if(cnt == 1){
                if(pre2(str[0][i])){
                    int hour = (int)(toupper(str[0][i]) - 'A' + 10);
                    printf("%02d:", hour);
                    break;
                }
                if(pre3(str[0][i])){
                    int hour = (int)(str[0][i] - '0');
                    printf("%02d:", hour);
                    break;
                }
            }
        }
    }
    for(int i = 0; i <= strlen(str[2]); i++){
        if(str[2][i] == str[3][i]){
            if(pre2(str[2][i])){
                printf("%02d", i);
                break;
            }
        }
    }

    return 0;
}