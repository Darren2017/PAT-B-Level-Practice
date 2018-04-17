#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct coo{
    int x;
    int y;
    int pix;
};

int cmp(int a, int b, int c){
    if(abs(a -b) > c){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    struct coo coo;
    int m, n, tol, pix[1000][1000];
    int count[16770] = {0};
    scanf("%d %d %d", &m, &n, &tol);
    int k = 1, cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            scanf("%d", &pix[i][j]);
            count[k++] = pix[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int cntt = 0;
            for(int l = 1; l < m * n; l++){
                if(count[l] == pix[i][j]){
                    cntt++;
                }
                k++;
            } 
            if(cntt != 1)   continue;
            int flag = 0;
            if(i - 1 > 0 && j - 1 > 0){
                if(cmp(pix[i][j], pix[i - 1][j - 1], tol) == 1)     flag = 1;
                else   continue;
            }else    continue;
            if(i - 1 > 0){
                if(cmp(pix[i - 1][j], pix[i][j], tol) == 1)     flag = 1;
                else    continue;
            }else    continue;
            if(i - 1 > 0 && j + 1 <= m){
                if(cmp(pix[i][j], pix[i - 1][j + 1], tol) == 1)     flag = 1;
                else    continue;
            }else    continue;
            if(j + 1 <= m){
                if(cmp(pix[i][j], pix[i][j + 1], tol) == 1)     flag = 1;
                else    continue;
            }else    continue;
            if(i + 1 <= n && j + 1 <= m){
                if(cmp(pix[i][j], pix[i + 1][j + 1], tol) == 1)     flag = 1;
                else    continue;
            }else    continue;
            if(i + 1 <= n){
                if(cmp(pix[i][j], pix[i + 1][j], tol))  flag = 1;
                else    continue;
            }else    continue;
            if(i + 1 <= n && j - 1 > 0){
                if(cmp(pix[i][j], pix[i + 1][j - 1], tol) == 1)     flag = 1;
                else    continue;
            }else    continue;
            if(j - 1 > 0){
                if(cmp(pix[i][j], pix[i][j - 1], tol) == 1)     flag = 1;
                else    continue;
            }else    continue;
            coo.x = j;
            coo.y = i;
            coo.pix = pix[i][j];
            cnt++;
            if(cnt > 1){
                printf("Not Unique");
                return 0;
            }
        }
    }
    if(cnt == 1){
        printf("(%d, %d): %d", coo.x, coo.y, coo.pix);
    }if(cnt == 0){
        printf("Not Exist");
    }

    return 0;
}