#include<stdio.h>

int maxx (int a, int b, int c){
    int max = a;
    if (b > max){
        max = b;
    }
    if (c > max){
        max = c;
    }
    if(max == b && max == c) return c;
    if(max == a && max == b) return a;
    if(max == a && max == c) return c;
    
    return max;
}

int main()
{
    int N;
    int a[4] = {0};
    int b[4] = {0};
    int WA1 = 0, WA2 = 0, WA3 = 0;
    scanf("%d", &N);
    getchar();
    for(int i = 0; i < N; i++){
        char A, B;
        scanf("%c %c", &A, &B);
        getchar();
        if(A == 'C' && B == 'B'){
            WA3++;
            b[2]++;
        }else if(A == 'C' && B == 'J'){
            WA1++;
            a[0]++;
        }else if(A == 'J' && B == 'C'){
            WA3++;
            b[0]++;
        }else if(A == 'J' && B == 'B'){
            WA1++;
            a[1]++;
        }else if(A == 'B' && B == 'C'){
            WA1++;
            a[2]++;
        }else if(A == 'B' && B == 'J'){
            WA3++;
            b[1]++;
        }else{
            WA2++;
        }
    }
    printf("%d %d %d\n%d %d %d\n", WA1, WA2, WA3, WA3, WA2, WA1);
    int max[3] = {0};
    max[0] = maxx(a[0], a[1], a[2]);
    max[1] = maxx(b[0], b[1], b[2]);
    if(max[0] == a[2])  printf("B ");
    else if(max[0] == a[0])  printf("C ");
    else if(max[0] == a[1])  printf("J ");
    if(max[1] == b[2])  printf("B");
    else if(max[1] == b[0])  printf("C");
    else if(max[1] == b[1])  printf("J");
    

    return 0;
}