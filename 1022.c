#include<stdio.h>

int main()
{
    int a, b, d;
    int sum;
    scanf("%d %d %d", &a, &b, &d);
    sum = a + b;
    int result[100000];
    int i = 0;
    while(sum){
        result[i++] = sum % d;
        sum /= d;
    }
    for(int n = i - 1; n >=0; n--){
        printf("%d", result[n]);
    }
    if (i == 0){
        printf("0");
    }

    return 0;
}