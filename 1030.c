#include<stdio.h>
#include<stdlib.h>


int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
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

    qsort(num, n, sizeof(int), cmpfunc);

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