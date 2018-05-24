// #include<stdio.h>     //扣2分

// void bsort(double a[], int b[], int c[], int n)
// {
//     int i,j;
//     for(i=0;i<n-1;i++)
//     {
//         for(j=n-1;j>i;j--)
//         {
//             if(a[j]>a[j-1])
//             {   
//                 int t;
//                 t = b[j];
//                 b[j] = b[j - 1];
//                 b[j -1] = t;
//                 int temp;
//                 temp=c[j];
//                 c[j]=c[j-1];
//                 c[j-1]=temp;
//                 double tem;
//                 tem = a[j];
//                 a[j] = a[j - 1];
//                 a[j - 1] = tem;
//             }
//         }
//     }
// }

// int main()
// {
//     int kind, need, sum = 0;
//     double money = 0.0;
//     scanf("%d %d", &kind, &need);
//     int num[1000] = {0}, allprice[1000] = {0};
//     double perprice[1000] = {0};
//     for(int i = 0; i < kind; i++){
//         scanf("%d", &num[i]);
//     }
//     for(int i = 0; i < kind; i++){
//         scanf("%d", &allprice[i]);
//         perprice[i] = allprice[i] / (num[i] * 1.0);
//     }

    
//     bsort(perprice, num, allprice,kind);
//     int i = 0;
//     while(need){
//         if(num[i] < need){
//             if(num[i] == 0){
//                 break;
//             }
//             money = money + allprice[i];
//             need -= num[i];
//             i++;
//         }else{
//             money += (perprice[i] * need);
//             need = 0;
//             i++;
//         }
//     }
//     printf("%.2lf", money);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int kind, max;
    double need, num[1000], sum = 0, allprice[1000];
    scanf("%d %lf", &kind, &need);
    for(int i = 0; i < kind; i++){
        scanf("%lf", &num[i]);
    }
    for(int i = 0; i < kind; i++){
        scanf("%lf", &allprice[i]);
    }

    while(need > 0)
    {   
        max = 0;
        for(int i = 0; i < kind; i++){
            if(allprice[i] / num[i] > allprice[max] / num[max])   //搞不懂为什么求出均价来比较倒数第四个测试点过不了
                max = i;
        }
        if(num[max] < need){
            sum += allprice[max];
            need -= num[max];
            allprice[max] = 0;
        }else{
            sum += allprice[max] * need / num[max];
            need = 0;
        }
    }
    printf("%.2f", sum);

    return 0;
}