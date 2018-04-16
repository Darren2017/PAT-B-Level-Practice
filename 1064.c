#include<stdio.h>

int main()
{
    int n, temp, cnt = 0, count = 0, friend[10000] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int tem = 0;
        scanf("%d", &temp);
        while(temp != 0){
            tem = tem + temp % 10;
            temp /= 10;
        }
        if(friend[tem] == 0){
            cnt++;
            friend[tem]++;
        }else{
            friend[tem]++;
        }
    }
    printf("%d\n", cnt);
    for(int i = 0; i <= 1000; i++){
        if(friend[i]){
            printf("%s%d", count++ ? " " : "", i);
        }
    }
    return 0;
}