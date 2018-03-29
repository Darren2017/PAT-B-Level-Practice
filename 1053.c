#include<stdio.h>


int main()
{
    int n, d, k;
    double sumcnt1 = 0.0, sumcnt2 = 0.0; //sumcnt1表示空置房子数， sumcnt2表示可能空置数
    double e;

    scanf("%d %lf %d", &n, &e, &d);
    for(int i = 0; i < n; i++){
        int cnt = 0;
        scanf("%d", &k);
        for(int j = 0; j < k; j++){
            double num;
            scanf("%lf", &num);
            if(num < e){
                cnt++;
            }
        }
        if(cnt > k /2){
            if(k > d){
                sumcnt1++;
            }else{
                sumcnt2++;
            }
        }

    }

    printf("%.1f%% %.1f%%", sumcnt2 / n * 100, sumcnt1 / n * 100);

    return 0;
}