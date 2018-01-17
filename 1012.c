#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int a[N], i, j = 1, cnt2 = 0, cnt4 = 0;
    int A1 = 0, A2 = 0, A3 = 0, A4 = 0, A5 = 0;
    for(i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < N; i++){
        if(a[i] % 5 == 0 && a[i] % 2 == 0){
            A1 += a[i];
        }
        if(a[i] % 5 == 1){
            A2 = A2 + j * a[i];
            j = j * (-1);
            ++cnt2;
        }
        if(a[i] % 5 == 2){
            ++A3;
        }
        if(a[i] % 5 == 3){
            A4 += a[i];
            ++cnt4;
        }
        if(a[i] % 5 == 4){
            if(A5 < a[i]){
                A5 = a[i];
            }
        }
    }
    if(A1 == 0){
        printf("N ");
    }else{
        printf("%d ", A1);
    }
    if(cnt2 == 0){
        printf("N ");
    }else{
        printf("%d ", A2);
    }
    if(A3 == 0){
        printf("N ");
    }else{
        printf("%d ", A3);
    }
    if(A4 == 0){
        printf("N ");
    }else{
        printf("%.1f ", (double)(A4) / cnt4);
    }
    if(A5 == 0){
        printf("N");
    }else{
        printf("%d", A5);
    }

    return 0;

}