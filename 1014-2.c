#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[4][61];
    char *date[] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
    scanf("%s %s %s %s", str[0], str[1], str[2], str[3]);
    int i;
    for(i = 0; str[0][i] && str[0][i]; i++){
        if(str[0][i] == str[1][i]){
            if (str[0][i] >= 'A' && str[0][i] <= 'G'){
                printf("%s", date[str[0][i] - 'A']);
                break;
            }
        }  
    }      
    for(i = i + 1; str[0][i] && str[1][i]; i++){
        if(str[0][i] == str[1][i]){
            if(str[0][i] >= 'A' && str[0][i] <= 'N'){
                printf("%02d:", str[0][i] - 'A' + 10);
                break;
            }    
            if(isdigit(str[0][i])){
                printf("%02d:", str[0][i] - '0');
                break;
            }
        }        
    }
    for(i = 0; str[2][i] && str[3][i]; i++){
        if(str[2][i] == str[3][i] && isalpha(str[2][i])){
            printf("%02d", i);
            break;
        }
    }
    return 0;
}