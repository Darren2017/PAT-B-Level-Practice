#include <iostream>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

bool isRed(int i, int j, vector<vector<int> > v, int tol){
    if (abs(v[i - 1][j - 1] - v[i][j]) <= tol){ // 左上角
        return false;
    }
    if (abs(v[i][j - 1] - v[i][j]) <= tol){ // 上
        return false;
    }
    if (abs(v[i + 1][j - 1] - v[i][j]) <= tol){ // 右上角
        return false;
    }
    if (abs(v[i + 1][j] - v[i][j]) <= tol){ // 右
        return false;
    }
    if (abs(v[i + 1][j + 1] - v[i][j]) <= tol){ // 右下角
        return false;
    }
    if (abs(v[i][j + 1] - v[i][j]) <= tol){ // 下
        return false;
    }
    if (abs(v[i - 1][j + 1] - v[i][j]) <= tol){ // 左下角
        return false;
    }
    if (abs(v[i - 1][j] - v[i][j]) <= tol){ // 左
        return false;
    }
    return true;
}

vector<vector<int> > v;

int main(){
    int m, n, tol;
    scanf("%d %d %d", &m, &n, &tol);
    // n行m列二维数组
    v.resize(n + 2);
    for (int i = 0; i < n + 2; ++i){
        v[i].resize(m + 2);
    }
    map<int, int> isRepeat;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            scanf("%d", &v[i][j]);
            ++isRepeat[v[i][j]];
        }
    }
    int cnt = 0;
    int resI, resJ;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            if (isRepeat[v[i][j]] == 1){ // 只出现过一次
                if (isRed(i, j, v, tol)){
                    ++cnt;
                    resI = i;
                    resJ = j;
                    if (cnt == 2){
                        break;
                    }
                }
            }
        }
        if (cnt == 2){
            break;
        }
    }
    if (cnt == 0){
        printf("Not Exist\n");
    }
    else if (cnt == 1){
        printf("(%d, %d): %d\n", resJ, resI, v[resI][resJ]);
    }
    else if (cnt == 2){
        printf("Not Unique\n");
    }
    return 0;
}