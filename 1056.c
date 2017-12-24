#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int a[10], sum = 0;
    int i, j;
    for(i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < N -1; i++){
        for(j = i +1; j < N; j++){
            sum += a[i] * 10 + a[j];
        }
    }
    for(i = N -1; i > 0; i--){
        for(j = i - 1; j >= 0; j--){
            sum += a[i] * 10 + a[j];
        }
    }
    
    printf("%d", sum);

    return 0;
}