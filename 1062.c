#include<stdio.h>

int gcd(int a, int b){
    if (a%b == 0) {
        return b;
    }
    return gcd(b, a%b);
}

int main()
{
    int n1, n2, m1, m2, K, cnt = 0;
    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &K);
    if(n2 * m1 < n1 * m2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
        temp = m1;
        m1 = m2;
        m2 = temp;
    }

    for(int num = n1 * K / m1 + 1; n2 * K > m2 * num; num++){
        if(gcd(num, K) == 1){
            printf("%s%d/%d",cnt++ ? " " : "",num, K);
        }
    }
    return 0;
}