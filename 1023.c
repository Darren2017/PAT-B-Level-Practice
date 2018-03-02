#include<stdio.h>

int main()
{
    int num[11];
    int i;
    for(i = 0; i < 10; i++){
        scanf("%d", &num[i]);
    }
    i = 1;
    while(1){
        if(num[i]){
            printf("%d", i);
            num[i]--;
            break;
        }else{
            i++;
        }
    }
    for(i = 0; i < 10; i++){
        while(num[i]){
            printf("%d", i);
            num[i]--;
        }
    }

    return 0;
}
