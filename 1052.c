#include<stdio.h>

void handle(int a, char str[]);

int main()
{
    char smp[3][44];
    for(int i = 0; i < 3; i++){
        gets(smp[i]);
    }
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int a1, a2, a3, a4, a5;
        scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);
        handle(a1, smp[0]);
        handle(a2, smp[1]);
        handle(a3, smp[2]);
        handle(a4, smp[3]);
        handle(a5, smp[4]);
    }
}

void handle(int a, char str[]){
    a--;
    for(int i = 0)
}