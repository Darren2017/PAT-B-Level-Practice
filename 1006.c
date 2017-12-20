#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int b, c, d;
    b = a / 100;
    a %= 100;
    c = a  / 10;
    d = a % 10;
    int i;
    for(i = 0; i < b; i++){
        printf("B");
    }
    for(i = 0; i < c; i++){
        printf("S"); 
    }
    for(i = 1; i <= d; i++){
        printf("%d", i);
    }

    return 0;
}