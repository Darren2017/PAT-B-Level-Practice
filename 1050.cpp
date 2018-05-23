#include<iostream>          //既然不能直接输出，我们可以模拟螺旋输出，但是将结果放到一个数组中，最后输出数组即可
#include<cmath>
#include<algorithm>
using namespace std;

int N;

bool compare(const int &a, const int &b){
    return a > b;
}

int main()
{
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    sort(A, A + N, compare);

    int m, n= sqrt(N);
    while((N % n) != 0){
        n--;
    }
    m = N / n;

    bool vis[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            vis[i][j] = false;
        }
    }

    int out[m][n];
    int nx[4] = {0, 1, 0, -1}, ny[4] = {1, 0, -1, 0}, ne = 0;
    int i = 0, j = 0, k = 0;
    while(k < N){
        out[i][j] = A[k++];
        vis[i][j] = true;

        int ni = i + nx[ne], nj = j + ny[ne];
        if(ni >= m || ni < 0 || nj >= n || nj < 0 || vis[ni][nj]){
            ne = (ne + 1) % 4;
        }

        i += nx[ne];
        j += ny[ne];
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << out[i][j];
            if(j + 1 < n)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}