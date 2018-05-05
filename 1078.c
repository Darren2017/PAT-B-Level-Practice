#include<stdio.h>
#include<ctype.h>

void Compress();
void Decompress();

int main()
{
    char sign;
    scanf("%c", &sign);
    getchar();
    if(sign == 'C'){
        Compress();
    }else{
        Decompress();
    }

    return 0;
}

void Compress(){
    char prev = getchar(), input;
    int cnt = 1;
    while((input = getchar())){
        if(input == prev){
            cnt++;
        }else{
            if(cnt == 1){
                printf("%c", prev);
            }else{ 
                printf("%d%c", cnt, prev);
            }
            if(input == '\n'){
                break;
            }
            prev = input;
            cnt = 1;
        }
    }
}

void Decompress(){
    char input;
    while((input = getchar())){
        if(isdigit(input)){
            int cnt = input - '0';
            char output;
            while(isdigit((output = getchar()))){
                cnt = cnt * 10 + output - '0';
            }
            for(int i = 0; i < cnt; i++){
                printf("%c", output);
            }
        }else if(input == '\n'){
            break;
        }else{
            printf("%c", input);
        }
    }
}