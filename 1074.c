#include<stdio.h>

void dfunc(int i, int c[]){
    for(int j = 0; j < i / 2; j++){
        int temp = c[j];
        c[j] = c[i - j - 1];
        c[i - j - 1] = temp;
    }
}

int main()
{
    int a, b, d, dd[20] = {0}, aa[20] = {0}, bb[20] = {0}, result[;
    scanf("%d %d %d", &d, &a, &b);
    int i = 0;
    while(d){
        dd[i++] = d % 10;
        d /= 10;
    }
    i = 0;
    while(a){
        aa[i++] = a % 10;
        a /= 10;
    }
    i = 0;
    while(b){
        bb[i++] = b % 10;
        b /= 10;
    }

    for(int j = 0; j < i; j++){

    }
    
    return 0;
}