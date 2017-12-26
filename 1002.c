    #include<stdio.h>

    int main()
    {
        int sum = 0;
        char ch;
        int cnt = 1;
        while((ch = getchar()) != '\n'){
            sum += ch -'0';
        }
        char num[][8] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
        int mask = 1;
        int SUM = sum;
        while(SUM > 9){
            mask *= 10;
            SUM /= 10;
        }
        while(mask > 0){
            printf("%s", num[sum / mask]);
            if(mask > 9){
                printf(" ");
            }
            sum %= mask;
            mask /= 10;
        }
        return 0;
    }