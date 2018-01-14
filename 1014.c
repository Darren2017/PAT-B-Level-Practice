#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[4][61];
    char date[][5] = {"MON ", "TUE ", "WEN ", "THU ", "FRI ", "SAT ", "SUN "};
    scanf("%s %s %s %s", str[0], str[1], str[2], str[3]);
    int cnt = 0;
    for(int i = 0; str[0][i] && str[0][i]; i++){
        if(str[0][i] == str[1][i]){
            if(cnt == 0){
                if (str[0][i] >= 'A' && str[0][i] <= 'G'){
                    cnt++;
                    int day = (int)(str[0][i] - 'A');
                    printf("%s", date[day]);
                }
                continue;
            } 
            if(cnt == 1){
                if(str[0][i] >= 'A' && str[0][i] <= 'N'){
                    int hour = (int)(str[0][i] - 'A' + 10);
                    printf("%02d:", hour);
                    break;
                }
                if(str[0][i] >= '0' && str[0][i] <= '9'){
                    int hour = (int)(str[0][i] - '0');
                    printf("%02d:", hour);
                    break;
                }
            }
        }
    }
    for(int i = 0; i <= strlen(str[2]); i++){
        if(str[2][i] == str[3][i] && isalpha(str[2][i])){
            printf("%02d", i);
            break;
        }
    }
    return 0;
}