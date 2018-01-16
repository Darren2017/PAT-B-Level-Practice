#include<stdio.h>
#include<string.h>
#define M 10001

int main()
{
    char A[M], Q[M];
    int B, R = 0;
    scanf("%s", A);
    scanf("%d", &B);
    int i, len;
    len = strlen(A);
    for(i = 0; i < len; i++){
        R = R * 10 + (A[i] - '0');
        Q[i] = R / B + '0';
        R = R % B;
    }
    i = 0;
    while(Q[i] == '0'){
        i++;
    }
    if(Q[i] == '\0'){
        printf("%d", 0);
    }
    for(; i < len; i++){
        printf("%c", Q[i]);
    }
    printf(" %d", R);

    return 0;
}