#include <stdio.h>

long mgcd(long a, long b);
void printnum(long a, long b);

int main()
{
    long a1, b1, a2, b2;
    scanf("%ld/%ld %ld/%ld", &a1, &b1, &a2, &b2);

    char opstr[4] = {'+', '-', '*', '/'};

    for(int i = 0; i < 4; i++){
        printnum(a1, b1);
        printf(" %c ", opstr[i]);
        printnum(a2, b2);
        printf(" = ");

        switch(i){
            case 0: printnum(a1 * b2 + a2 * b1, b1 * b2);   break;
            case 1: printnum(a1 * b2 - a2 * b1, b1 * b2);   break;
            case 2: printnum(a1 * a2, b1 * b2);     break;
            case 3: printnum(a1 * b2, a2 * b1);     break;
        }
        printf("\n");
    }

    return 0;
}

long mgcd(long a, long b){
    long r;
    while((r = a % b)){
        a = b;
        b = r;
    }
    return b;
}

void printnum(long a, long b){
   
    if(b == 0){
        printf("Inf");
        return;
    }
   
    int flag = 1;
    if(a < 0){
        a = -a;
        flag *= -1;
    }
    if(b < 0){
        b = -b;
        flag *= -1;
    }

    long gcd = mgcd(a, b);
    a /= gcd;
    b /= gcd;

    if(flag == -1){
        printf("(-");
    }
    if(a / b && a % b){
        printf("%ld %ld/%ld", a / b, a % b, b);
    }else if(a % b){
        printf("%ld/%ld", a % b, b);
    }else{
        printf("%ld", a / b);
    }
    if(flag == -1){
        printf(")");
    }
}