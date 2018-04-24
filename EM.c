#include<stdio.h>

int main()
{
    double P1, P2;
    printf("赋初值：请输入投掷硬币A正面向上的概率:PA=");
    scanf("%lf", &P1);
    printf("赋初值：请输入投掷硬币B正面向上的概率:PB=");
    scanf("%lf", &P2);

    int h[5], t[5];       //分别用来记录五次投掷中正反面的次数
    for(int i = 0; i < 5; i++){
        printf("请输入第%d次投掷硬币得到为正面的次数：h1:",i + 1);
        scanf("%d",&h[i]);
        printf("...得到反面的次数:t1:");
        scanf("%d",&t[i]);
    }

    for(int m = 0; m < 8; m++){
        printf("本次使用的P1,P2  %f %f\n", P1,P2);
        double p1[5] = {1, 1, 1, 1, 1}, p2[5] = {1, 1, 1, 1, 1};
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < h[i]; j++){
                p1[i] *= P1;
                p2[i] *= P2;
            }
            for(int j = 0; j < t[i]; j++){
                p1[i] *= (1 - P1);
                p2[i] *= (1 - P2);
            }
        printf("%f, %f\n", p1[i], p2[i]);            
        }
        int sum1 = 0, sum2 = 0, cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < 5; i++){
            if(p1[i] > p2[i]){
                sum1 += h[i];
                cnt1++;
            }else{
                sum2 += h[i];
                cnt2++;
            }
        }
        printf("%d %d\n", sum1, sum2);
        P1 = sum1 * 1.0 / (5 * cnt1) ;
        P2 = sum2 * 1.0 / (5 * cnt2);

        printf("经过%d次训练，A B硬币正面朝上的概率分别为%0.2f %0.2f\n", m + 1, P1, P2);
    }

    return 0;
    
}