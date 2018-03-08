#include<stdio.h>
#include<ctype.h>

int main()
{
    char input[100];
    char output[100];
    int i = 0, j = 0, incnt = 0, outcnt = 0;
    scanf("%s", input);
    getchar();
    scanf("%s", output);
    
    while(input[i]){
        input[i] = toupper(input[i]);
        i++;
    }
    incnt = i;
    i = 0;
    while(output[i]){
        output[i] = toupper(output[i]);
        i++;
    }
    outcnt = i;
    for(i = 0; i < incnt; i++){
        for(j = 0; j < outcnt; j++){
            if(input[i] == output[j]){
                break;
            }
        }
        if(j == outcnt){
            printf("%c", input[i]);
            output[j] = input[i];
            outcnt++;
        }
    }

    return 0;
}