#include<stdio.h>

int main()
{
    long G1, G2, rg;
    int S1, S2, rs, K1, K2, rk;
    scanf("%ld.%d.%d", &G1, &S1, &K1);
    scanf("%ld.%d.%d", &G2, &S2, &K2);
    long p = G1 * 17 * 29 + S1 * 29 + K1;
    long a = G2 * 17 * 29 + S2 * 29 + K2;
    if(a >= p){
        if(K2 >= K1){
            rk = K2 - K1;
        }else{
            rk = 29 + K2 - K1;
            S2--;
        }
        if(S2 >= S1){
            rs = S2 - S1;
        }else{
            rs = 17 + S2 - S1;
            G2--;
        }
        rg = G2 - G1;
        printf("%ld.%d.%d", rg, rs, rk);
    }else{
        if(K1 >= K2){
            rk = K1 - K2;
        }else{
            rk = 29 + K1 - K2;
            S1--;
        }
        if(S1 >= S2){
            rs = S1 - S2;
        }else{
            rs = 17 + S1 - S2;
            G1--;
        }
        rg = G1 - G2;
        printf("-");
        printf("%ld.%d.%d", rg, rs, rk);
    }    

    return 0;
}