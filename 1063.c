#include<stdio.h>
#include<math.h>

int main()
{
    int n, a, b;
    double max = 0.0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        if(max < sqrt(pow(a, 2) + pow(b, 2))){
            max = sqrt(pow(a, 2) + pow(b, 2));
        }
    }
    printf("%.2lf", max);

    return 0;
}