#include<stdio.h>

int main()
{
    int maxID, minID, maxDis = 0, minDis = 100000000, N, ID, x, y, distance;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d %d %d", &ID, &x, &y);
        distance = x * x + y * y;   //求距离
        if(maxDis < distance){
            maxDis = distance;
            maxID = ID;
        }
        if(minDis > distance){
            minDis = distance;
            minID = ID;
        }
    }

    printf("%04d %04d", minID, maxID);

    return 0;
}