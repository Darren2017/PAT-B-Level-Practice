#include<stdio.h>

void transate1(int result[], int input){     //将数字转换为数组进行处理
    result[0] = input / 1000;       
    input %= 1000;
    result[1] = input / 100;
    input %= 100;
    result[2] = input / 10;
    input %= 10;
    result[3] = input;
}

int transate21(int result[], int input){    //降序排列的数字
    input = result[0] * 1000 + result[1] * 100 + result[2] * 10 + result[3];

    return input;
}

int transate22(int result[], int input){    //升序排列的数字
    input = result[0] + result[1] * 10 + result[2] * 100 + result[3] * 1000;

    return input;
}

void swap4(int result[]){                   //将数组按照降序排列
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
        do{                                             //使用do-while语句，而不是直接使用while语句，否则输入为6174时输出为空
            transate1(result, input);
            swap4(result);
            printf("%04d - %04d = %04d\n", transate21(result, input), transate22(result, input), transate21(result, input) - transate22(result, input));
            input = transate21(result, input) - transate22(result, input);
        }while(input != 6174);
    }
    
    return 0;
}