#include<stdio.h>

int main()
{
    int n;
    double num[100001] = {0};
    scanf("%d", &n);
    int m = n;
    double result = 0.0;
    for(int i = 1; i <= n; i++){
        scanf("%lf", &num[i]);
        result = result + num[i] * 1.0 * m * i;
        m--;
    }
    printf("%.2f", result);
    return 0;
}