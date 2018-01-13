#include<stdio.h>

int pre(int x)
{
    int k = 2;
    while(k < x / k + 1){
        if(x % k == 0){
            return 0;
        }
        k++;
    }
    return 1;
}

int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    int cnt2 = 0, cnt3 = 0;
    for(int i = 2; cnt2 <= N; i++){
        if( pre(i) ){
            ++cnt2;
            if(cnt2 >= M && cnt2 <= N){
                ++cnt3;
                printf("%d", i);
                if(cnt3 % 10 == 0){
                    printf("\n");
                }else{
                    if(cnt2 != N){
                        printf(" ");
                    }
                }
            }
        }
    }
    return 0;
}