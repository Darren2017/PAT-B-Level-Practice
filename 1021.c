#include<stdio.h>

int main()
{
	char a[1000];
	int b[10] = {0,0,0,0,0,0,0,0,0,0};
	int i = 0, j = 0, k =0;
	scanf("%s", a);
	while(a[i]){
		i++;
	}
	for(j = 0; j < i; j++){
		for(k = 0; k < 10; k++){
			if(a[j] - '0' == k){
				b[k]++;
			}
		}
	}
	
	for(i = 0; i < 10; i++){
		if(b[i] != 0){
			printf("%d:%d\n", i, b[i]);
		}
	}
	
	return 0;
	
 } 
