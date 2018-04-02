#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    int sum = 0, cnt1 = 0, cnt0 = 0;
    while((ch = getchar()) != '\n'){
        if(isalpha(ch)){
            ch = tolower(ch);
            sum += ch - 'a' + 1;
        }
    }
    while(sum != 0){
        if(sum % 2 == 1){
            cnt1++;
        }else{
            cnt0++;
        }
        sum /= 2;
    }

    printf("%d %d", cnt0, cnt1);

    return 0;
}