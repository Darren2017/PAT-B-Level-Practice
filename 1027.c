#include<stdio.h>
#include<math.h>

int main()
{
    int n, m, r;
    int p[25], q[25];
    char s;
    scanf("%d", &n);
    getchar();
    scanf("%c", &s);
    m = sqrt((n + 1) / 2);
    r = n - 2 * pow(m, 2) + 1;

    for(int i = 0; i < m; i ++){
        p[i] = 2 * (i + 1) - 1;
        q[i] = 2 * (i + 1) - 1;
    }
    for(int i = m -1; i >=0 ; i--){
        int j = m - i - 1;
        while(j--){
            putchar(' ');
        }
        while(p[i]--){
            printf("%c", s);
        }
        printf("\n");
    }
    for(int i = 1; i < m; i++){
        int j = m - i - 1;
        while(j--){
            putchar(' ');
        }
        while(q[i]--){
            printf("%c", s);
        }
        printf("\n");
    }

    printf("%d", r);
    return 0;

}