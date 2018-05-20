#include <iostream>
#include <algorithm>
using namespace std;

void mergesort(int a[], int L, int R);
void merger(int a[], int L, int M, int R);


int main()
{
    int N, a[101], b[101], i, j;
    cin >> N;
    for(i = 0; i < N; i++){
        cin >> a[i];
    }
    for(i = 0; i < N; i++){
        cin >> b[i];
    }
    for(i = 0; b[i] <= b[i+i] && i < N - 1; i++);
    for(j = i + 1; a[j] == b[j] && j < N; j++);
    if(j == N){
        cout << "Insertion Sort" << endl;
         sort(a, a + i + 2);
        // int key = a[i + 1];
        // for(int j = i; j > 0 && b[j - 1] > key; j--){
        //     b[j] = b[j - 1];
        // }
        // b[j] = key;
    }else{
        cout << "Merge Sort" << endl;
        int k = 1, flag = 1;
        while(flag) {
            flag = 0;
            for (i = 0; i < N; i++) {
                if (a[i] != b[i])
                    flag = 1;
            }
            k = k * 2;
            for (i = 0; i < N / k; i++){
                sort(a + i * k, a + (i + 1) * k);
            }
            sort(a + N / k * k, a + N);
        }
    }
    for (j = 0; j < N; j++) {
        if (j != 0) printf(" ");
        printf("%d", a[j]);
    }
    return 0;
}
