#include<iostream>
#include<map>
#include<cmath>

using namespace std;

map<int, int> vis;
int pix[1001][1001];
int n, m, tol;
int sur[8][2] = {1,0, -1,0, 0,1, 0,-1, 1,1, 1,-1, -1,1, -1,-1};

bool check(int x, int y){
    for(int i = 0; i < 8; i++){
        int xx = x + sur[i][0];
        int yy = y + sur[i][1];
        if(xx>=0 && xx<n && yy<m && yy>=0 && abs(pix[xx][yy]-pix[x][y])<=tol ) return false;
    }
    return true;
}

int main()
{
    cin >> m >> n >> tol;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> pix[i][j];
            vis[pix[i][j]]++;
        }
    }

    int cnt = 0;
    int x, y;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(vis[pix[i][j]] == 1 && check(i, j)){
                cnt++;
                x = i;
                y = j;
            }
        }
    }
    if(cnt==1){  
        printf("(%d, %d): %d\n", y + 1, x + 1, pix[x][y]);  
    }  
    else if(cnt>1){  
        puts("Not Unique");  
    }  
    else{  
        puts("Not Exist");  
    }  
      
    return 0;  
}