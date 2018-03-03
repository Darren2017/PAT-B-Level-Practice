#include<stdio.h>    //这是个bug，仅此纪念读题不仔细的危害。
#include<math.h>    //题目要求指数不超过9999，故没有数据类型符合要求，应用字符串进行运算

int main()
{
    char num[1000];         //思路：用PN表示正负，用cnt1和cnt2分别记录小数点后的位数和指数，用zero表示小数中最后0的个数
    scanf("%s", num);
    double result = 0;
    int PN = 1;
    int cnt1 = 0, cnt2 = 0;
    int zero = 0;
    if (num[0] == '-'){
        PN = -1;
    }

    result = PN * (num[1] - '0') * 1.0;
    int i = 3;
    while(num[i] != 'E'){
        if (num[i] == '0'){
            zero++;
        }
        result += (num[i] - '0') * pow(0.1, (i - 2)) * PN;
        i++;
        if(num[i] != '0' && num[i] != 'E'){
            zero = 0;
        }
        cnt1++;
    }
    i++;
    if (num[i] == '+'){
        i++;
        int m = 0;
        while(num[i]){
            m = m *10 + num[i] - '0';
            i++;
        }
        cnt2 = m;
        while(m){
            result *= 10;
            m--;
        }
        if(cnt1 > cnt2){
            printf("%lf", result);
            if((cnt1 - cnt2) < zero){
                int zeronum = cnt1 - cnt2;
                while(zeronum--){
                    printf("0");
                }
            }else{
                while(zero--){
                    printf("0");
                }
            }
        }else{
            printf("%.0lf", result);
        }
    }else{
        i++;
        int m = 0;
        while(num[i]){
            m = m *10 + num[i] - '0';
            i++;
        }
        cnt2 = m;
        while(m){
            result *= 0.1;
            m--;
        }
        printf("%lf", result);
        while(zero--){
            printf("0");
        }
    }


    return 0;

}