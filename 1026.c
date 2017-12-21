#include<stdio.h>

int main()
{
	long C1, C2;
	scanf("%ld %ld", &C1, &C2);
	int h, m, s;
	long time;
	time = (C2 - C1 + 50) / 100;
	h = time / 3600;
	time %= 3600;
	m = time / 60;
	time %= 60;
	s = time;
	printf("%02d:%02d:%02d", h, m, s);
	
	return 0;
	
 } 
