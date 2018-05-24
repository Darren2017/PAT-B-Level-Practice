#include<stdio.h>
#include<stdlib.h>

int find(int a[], int n);

int cmp ( const void *a , const void *b)
{
        return *(int *)b - *(int *)a;
}

int main()
{
    int N, dis[100100];
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%d", &dis[i]);
    }
    qsort(dis+1, N, sizeof(dis[0]), cmp);

    int E = find(dis, N);
    printf("%d", E);

    return 0;
}

int find(int a[], int n){
    int E = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] > i){
            ++E;
        }
    }

    return E;
}