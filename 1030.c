#include<stdio.h>

void bsort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(a[j]<a[j-1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}

int main()
{
    int n;
    double p;
    int num[100002];
    int res = 1;

   scanf("%d %lf", &n, &p);

    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }

    bsort(num, n);

    for(int i = 0; i < n; ++i){
        for(int j = i + res - 1; j < n; ++j){
            if(num[j] <= num[i] * p){
                if(j - i + 1 > res){
                    res = j - i + 1; 
                }
            }else{
                break;
            }
        }
    }

    printf("%d", res);

    return 0;

}