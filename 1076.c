#include<stdio.h>

int main()
{
    int N, i, j, k = 0;
    char a, b;
    scanf("%d", &N);
    int d[100];
    for(i = 0; i < N; i++){
        for(j = 0; j < 4; j++){
            getchar();
            scanf("%c-%c", &a, &b);
            if(b == 'T'){
                d[k] = a - 'A' + 1;
                k++;
            }
        }
    }
    for(i = 0; i < N; i++){
        printf("%d", d[i]);
    }
    return 0;
}