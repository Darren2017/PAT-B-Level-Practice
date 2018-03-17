#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, e, flag = 0;
    char c;
    do{
        scanf("%d %d", &n, &e);
        if(e){
            if(flag){
               printf(" ");
           }
           printf("%d %d", n * e, e - 1);
           flag = 1;
       }
    }while((c = getchar()) != '\n');
    if(!flag){
        printf("0 0");
    }

    return 0;
}