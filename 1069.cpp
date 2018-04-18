#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    int M, N, S, cnt = 0;
    string name[1000];
    map<string, int> mymap;
    string temp;
    cin >> M >> N >> S;
    for(int i = 0; i < M; i++){
        cin >> temp;
        name[i] = temp;
    }
    for(int i = S - 1; i < M; i += N){
        mymap[name[i]]++;
        if(mymap[name[i]] == 1){
            cnt++;
            cout << name[i] << endl;
        }else{
            i = i - N + 1;
        }
        
    }
    if(cnt == 0){
        cout << "Keep going...";
    }

    return 0;
}