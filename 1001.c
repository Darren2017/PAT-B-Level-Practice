#include<stdio.h>

int main()
{
  int input=0, cnt=0;
  scanf("%d", &input);
    while(input != 1){
        if(input % 2){
            input=(3 * input + 1) / 2;
        }else{
            input = input / 2;
        }
        cnt++;
    }
  printf("%d", cnt);
  return 0;
 } 