// #include<stdio.h>          //C语言采用快速排序，但是速度太慢，C++使用内建函数sort排序

// void quicksort(int s[], int low, int hign);
// void swap(int s[], int i, int j);

// int a[100000], b[100000], v[100000];

// int main() {
//     int n, max = 0, cnt = 0;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//         b[i] = a[i];
//     }
//     quicksort(a, 0, n - 1);
//     for (int i = 0; i < n; i++) {
//         if(a[i] == b[i] && b[i] > max)
//             v[cnt++] = b[i];
//         if (b[i] > max)
//             max = b[i];
//     }
//     printf("%d\n", cnt);
//     for(int i = 0; i < cnt; i++) {
//         if (i != 0) printf(" ");
//         printf("%d", v[i]);
//     }
//     printf("\n");
//     return 0;
// }

// void quicksort(int s[], int low, int hign){
//     int i;
//     int last;
//     if(low < hign){
//         last = low;
//         for(i = low + 1; i <= hign; i++){
//             if(s[i] < s[low]){
//                 swap(s, ++last, i);
//             }
//         }
//         swap(s, last, low);
//         quicksort(s, low, last - 1);
//         quicksort(s, last + 1, hign);
//     }
// }

// void swap(int s[], int i, int j){
//     int temp;
//     temp = s[i];
//     s[i] = s[j];
//     s[j] = temp;
// }

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a[100000], b[100000], v[100000];
    int n, max = 0, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        if(a[i] == b[i] && b[i] > max)
            v[cnt++] = b[i];
        if (b[i] > max)
            max = b[i];
    }
    printf("%d\n", cnt);
    for(int i = 0; i < cnt; i++) {
        if (i != 0) printf(" ");
        printf("%d", v[i]);
    }
    printf("\n");
    return 0;
}