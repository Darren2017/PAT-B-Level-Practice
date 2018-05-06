#include<stdio.h>
#include<string.h>

int palin(char A[]);    //判断是否为回文数
void change(char A[]);  //逆转变换

int main()
{
    char A[1011] = {0};
    scanf("%s", A);
    if(palin(A)){
        printf("%s is a palindromic number.", A);
        return 0;
    }else{
        for(int i = 0; i < 10; i++){
            change(A);
            if(palin(A)){
                printf("%s is a palindromic number.", A);
                return 0;
            }

        }
    }
    printf("Not found in 10 iterations.");

    return 0;
}

int palin(char A[]){
    int len = strlen(A);
    for(int i = 0; i < len / 2; i++){
        if(A[i] != A[len - i - 1]){
            return 0;
        }
    }
    return 1;
}

void change(char A[]){
    printf("%s", A);
    char C[1011] = {0};
    int len = strlen(A);
    for(int i = 0; i < len; i++){
        C[i] = A[len - 1 - i];
    }
    int sum, carry = 0;
    for(int i = len - 1; i >= 0; i--){
        sum = A[i] + C[i] - '0' - '0' + carry;
        A[i] = sum % 10 + '0';
        carry = sum / 10;
    }
    if(carry){
        memmove(A + 1, A, len + 1);
        A[0] = carry + '0';
    }
    printf(" + %s = %s\n", C, A);
    
}