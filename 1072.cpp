#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    map<int, int> thing;
    string name;
    int N, M, m, temp, num, cntpeo = 0, cntth = 0;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> temp;
        thing[temp] = 1;
    }
    for(int i = 0; i < N; i++){
        int cnt = 0;
        cin >> name >> m;
        for(int j = 0; j < m; j++){
            cin >> num;
            if(thing[num] == 1){
                if(cnt == 0){
                    cout << name << ":";
                    cntpeo++;
                    cnt++;
                }
                cntth++;
                printf(" %04d", num);
            }
        }if(cnt != 0){
            cout << endl;
        }
    }
    cout << cntpeo << " " << cntth;
}