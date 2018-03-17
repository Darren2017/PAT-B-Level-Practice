#include<stdio.h>

int main()
{
    int K, n, keyword[101] = {0};
    scanf("%d", &K);
    for(int i = 0; i < K; i++){
        scanf("%d", &n);
        keyword[n] = 1;
    }
    for(int i = 0; i < 100; i++){
        if(keyword[i]){
            n = i;
            while(n != 1){
                if(n % 2){
                    n = (3 * n + 1) / 2;
                }
                else{
                    n /= 2;
                }
                if(n <= 100 && keyword[n]){
                    keyword[n] = 0;
                    K--;
                }
            }
        }
    }
    for(int i = 100; i > 0; i--){
        if(keyword[i] == 1){
            printf("%d%c", i, --K ? ' ' : '\0');
        }
    }

    return 0;
}