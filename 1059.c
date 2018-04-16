#include<stdio.h>
#include<math.h>

int pre(int a);

int main()
{
    int N, nID[10000] = {0};
    int K, tem;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &tem);
        nID[tem] = i + 1;
    }
    scanf("%d", &K);
    for(int i = 0; i < K; i++){
        scanf("%d", &tem);
        if(nID[tem] == -2){
            printf("%04d: Checked\n", tem);
            continue;
        }else if(nID[tem] == 1){
            printf("%04d: Mystery Award\n", tem);
            nID[tem] = -2;
            continue;
        }else if(pre(nID[tem]) && nID[tem]){
            printf("%04d: Minion\n", tem);
            nID[tem] = -2;
            continue;
        }else if(nID[tem]){
            printf("%04d: Chocolate\n", tem);
            nID[tem] = -2;
            continue;
        }else if(nID[tem] == 0){
            printf("%d: Are you kidding?\n", tem);
        }
    }
    return 0;
}

int pre(int a){
    int k = 2;
    while(k <= sqrt(a)){
        if(a % k == 0){
            return 0;
        }else{
            k++;
        }
    }
    return 1;
}