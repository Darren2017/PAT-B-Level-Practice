#include<stdio.h>
#include<math.h>

int main(void)
{
    int n, cnt = 0;
    scanf("%d", &n);
    int a[100000] = {0};
    int i, k, d = 2;
    do{
        k = d;
        if(a[k] == 0){
            k += d;
        }
        while(k <= n){
            a[k] = 1;
            k += d;
        }
        d +=1;
    }while(d < sqrt(100000));
    int b[1225] = {0};
    for(int j = 2, i = 0; j <= n; j++){
        if(a[j] == 0){
            b[i++] = j;
        }
    }
    for(i = 1; b[i] != 0; i++){
        if((b[i] - b[i - 1]) == 2){
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}