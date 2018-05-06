#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N, in, diff[10000] = {0};
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &in);
        int result = in - i - 1;
        if(result < 0){
            result = -result;
        }
        diff[result]++;
    }
    for(int i = N - 1; i >= 0; i--){
        if(diff[i] != 0 && diff[i] != 1){
            printf("%d %d\n", i, diff[i]);
        }
    }

    return 0;
}