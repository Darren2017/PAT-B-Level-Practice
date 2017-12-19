#include<stdio.h>

void judge(long a, long b, long c,int i)
{
    if((a + b) > c){
        printf("Case #%d: true\n", i);
    }else{
        printf("Case #%d: false\n", i);
    }
}

int main()
{
    int T;
    scanf("%d", &T);
    long a[T], b[T], c[T];
    int i = 1;
    for(i = 1; i <= T; i++){
        scanf("%ld %ld %ld", &a[i - 1], &b[i - 1], &c[i - 1]);
    }
    for(i = 1; i <= T; i++){
        judge(a[i - 1], b[i - 1], c[i - 1], i);
    }

    return 0;
}