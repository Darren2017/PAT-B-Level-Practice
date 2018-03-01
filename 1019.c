#include<stdio.h>

void transate1(int result[], int input){     /*将数字转换为数组进行处理*/
    result[0] = input / 1000;       
    input %= 1000;
    result[1] = input / 100;
    input %= 100;
    result[2] = input / 10;
    input %= 10;
    result[3] = input;
}

int transate2(int)

void swap4(int result[]){                   /*将数组按照降序排列*/
    for (int i = 0; i < 4; i++){
        for (int j = i; j < 4; j++){
            if (result[i] < result[j]){
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }
}

int main()
{
    int input;
    int result[4] = {0};
    scanf("%d", &input);
    transate1(result, input);
    
    if (result[0] == result[1] && result[1] == result[2] && result[2] == result[3]){
        for(int i = 0; i < 4; i++){
            printf("%d", result[i]);
        }
        printf(" - ");
        for(int i = 0; i < 4; i++){
            printf("%d", result[i]);
        }
        printf(" = 0000");
    }else{
        while(input != 6174){
            transate1(result, input);       /*还未写完， 思路：将读入的数字转换为数组，将数组按照升序或者降序排列，然后转换为数字，计算的出结果，重复此过程，直至得到6174*/
        }
    }
    

    return 0;
}