#include<stdio.h>
#include<string.h>

int main()
{
    int N, k = 0;
    scanf("%d", &N);
    double sum = 0.0;
    char a[50], b[50];
    for(int i = 0; i < N; i++){
        scanf("%s", a);
        double temp;
        sscanf(a, "%lf", &temp);
        sprintf(b, "%.2lf", temp);
        int flag = 0;
        for(int j = 0; j < strlen(a); j++){
            if(a[j] != b[j]){
                flag = 1;
                break;
            }
        }
        if(flag || temp > 1000 || temp < -1000){
            printf("ERROR: %s is not a legal number\n", a);
        }else{
            sum += temp;
            k++;
        }
    }
    if(k == 1){
       printf("The average of 1 number is %.2lf", sum); 
    }else if(k > 1){
        printf("The average of %d numbers is %.2lf", k, sum / k);
    }else{
        printf("The average of 0 numbers is Undefined");
    }

    return 0;
}
