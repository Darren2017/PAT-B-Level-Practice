// #include<stdio.h>
// #include<ctype.h>
// #include<string.h>

// void show1(char in[], char out[], int len){
//     int len2 = strlen(out);
//     int cnt = 0;
//     for(int i = 0; i < len2; i++){
//         int j = 0;
//         for(j = 0; j < len; j++){
//             if(toupper(out[i]) == toupper(in[j])){
//                 break;
//             }
//             if(isupper(out[i])){
//                 break;
//             }
//         }
//         if(j == len){
//             printf("%c", out[i]);
//             cnt++;
//         }
//     }
//     if(cnt == 0){
//         printf("\n");
//     }
// }
// void show2(char in[], char out[], int len){
//     int len2 = strlen(out);
//     int cnt = 0;
//     for(int i = 0; i < len2; i++){
//         int j;
//         for(j = 0; j < len; j++){
//             if(toupper(out[i]) == toupper(in[j])){
//                 break;
//             }
//             if(out[i] == '+'){
//                 break;
//             }
//         }
//         if(j == len){
//             printf("%c", out[i]);
//         }
//     }
//     if(cnt == 0){
//         printf("\n");
//     }
// }

// int main()
// {
//     char input[100000];
//     char output[100000];
//     scanf("%s", input);
//     getchar();
//     scanf("%s", output);
//     int len1 = strlen(input);
//     int len2 = strlen(output);
//     for(int i = 0; i < len1; i++){
//         if(input[i] == '+'){
//             show1(input, output, len1);
//             return 0;
//         }
//     }
//     show2(input, output, len1);

//     return 0;
// }

#include<stdio.h>           //字符也是可以用下标滴.......
#include<string.h>
#include<ctype.h>

int main()
{
    char bad[1000], should[100005], ch;
    gets(bad);
    gets(should);
    int pre[10000] = {0};
    int len1 = strlen(bad);
    for(int i = 0; i < len1; i++){
        char ch = tolower(bad[i]);
        pre[ch] = 1;
    }
    int len2 = strlen(should);
    for(int i = 0; i < len2; i++){
        char ch = tolower(should[i]);
        if(!pre[ch]){
            if(pre['+'] && (should[i] >= 'A' && should[i] <= 'Z')){
                continue;
            }
            putchar(should[i]);
        }
    }

    return 0;
}