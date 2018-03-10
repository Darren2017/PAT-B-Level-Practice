#include<stdio.h>
#include<ctype.h>

int main()
{
    int N, l = 0, i;
    int pin[100] = {0};
    int P[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    int Z[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char M[12] = "10X98765432";
    char num[100][19];
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        scanf("%s", num[i]);
        getchar();
        int j;
        for(j = 0; j < 17; j++){
            if(!isdigit(num[i][j])){
                break;
            }
        }
        if(j != 17){
            printf("%s\n", num[i]);
            l++;
        }else{
            int result = 0;
            j = 0;
            while(j != 18){
                result = result + (num[i][j] - '0') * P[j];
                j++;
            }
            result %= 11;
            for(int k = 0; k < 11; k++){
                if(result == Z[k]){
                    if(num[i][17] != M[k]){
                        printf("%s\n", num[i]);
                        l++;
                    }
                }
            }
        }
    }
    if(l == 0){
        printf("All passed");
    }

    return 0;
}