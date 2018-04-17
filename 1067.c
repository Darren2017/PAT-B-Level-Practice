#include<stdio.h>
#include <string.h>

int main()
{
    char answer[21], try[21];
    int n, i = 0;
    scanf("%s %d", answer, &n);
    getchar();
    for(int i = 0; i < n; i++){
        gets(try);
        if(!strcmp(try, "#")){
            return 0;
        }
        if(!strcmp(answer, try)){
            printf("Welcome in\n");
            return 0;
        }else{
            printf("Wrong password: %s\n", try);
        }
    }
    printf("Account locked\n");

    return 0;
}