
#include<stdio.h>
#include<ctype.h>

int main()
{
    char input[82];
    char output[162];
    int i = 0, incnt = 0, outcnt = 0;
    int m = 0;
    char result[81];
    scanf("%s", input);
    getchar();
    scanf("%s", output);
    
    while(input[i]){
        input[i] = toupper(input[i]);
        i++;
    }
    incnt = i;
    i = 0;
    while(output[i]){
        output[i] = toupper(output[i]);
        i++;
    }
    outcnt = i;
    i = 0;
    while(input[i]){
        int j = 0;
        while(output[j]){
            if(input[i] == output[j]){
                break;
            }
            j++;
        }
        printf("%d   ", j);
        if(j == outcnt){
            result[m] = input[i];
            output[j] = input[i];
            m++;
            outcnt++;
        }
        i++;
    }
    printf("\n%d\n", i);
    printf("%s", result);

    return 0;
}