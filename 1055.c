// #include<stdio.h>        //第二种是网上的，自己写的扣了6分，段错误，感觉是排序有点问题，还是用内建函数排序吧以后
// #include<string.h>

// struct studen{
//     char name[10];
//     int high;
// };
// struct studen stu[10000];

// void quicksort(int low, int hign);
// void swap(int i, int j);

// int main()
// {
//     int N, k, K[10], i;
//     scanf("%d %d", &N, &k);
//     int temp = N / k;
//     for(i = 0; i < k - 1; i++){
//         K[i] = temp;
//     }
//     int tem = temp;
//     while((k - 1) * (temp) + tem != N){
//         tem++;
//     }
//     K[i] = tem;

//     for(i = 0; i < N; i++){
//         scanf("%s %d", stu[i].name, &stu[i].high);
//     }

//     quicksort(0, N - 1);
//     int cnt = N - 1;

//     // for(i = 0; i < N; i++){
//     //     printf("%s %d\n", stu[i].name, stu[i].high);
//     // }
//     for(int i = k - 1; i >= 0; i--){
//         int sum = K[i];
//         int mid = sum / 2;
//         int index[1000];
//         for(int j = 0; j < K[i]; j++){
//             if(j % 2 == 0){
//                 mid = mid + j;
//             }else{
//                 mid = mid + j * (-1);
//             }
//             index[mid] = cnt--;
//             // printf("%d---%d     ", index[mid], mid);
//         }
//         for(int j = 0; j < K[i]; j++){
//             if(j != 0){
//                 printf(" ");
//             }
//             printf("%s", stu[index[j]].name);
//         }
//         printf("\n");

//     }

//     return 0;
// }

// void quicksort(int low, int high){
//     int i, last;
//     if(low < high){
//         last = low;
//         for(i = low + 1; i <= high; i++){
//             if(stu[i].high < stu[low].high){
//                 swap(++last, i);
//             }else if(stu[i].high == stu[low].high){
//                 if(strcmp(stu[i].name, stu[low].name) > 0){
//                     swap(++last, i);
//                 }
//             }
//         }
//         swap(last, low);
//         quicksort(low, last - 1);
//         quicksort(last + 1, high);
//     }
// }

// void swap(int i, int j){
//     struct studen temp;
//     temp = stu[i];
//     stu[i] = stu[j];
//     stu[j] = temp;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student *Student;

struct student{
    char name[9];
    int height;
};

int cmp(const void *a, const void *b)
{
    Student s1 = *(Student*)a;
    Student s2 = *(Student*)b;
    if(s1->height != s2->height)
        return s2->height - s1->height;
    return strcmp(s1->name, s2->name);
}

void printrow(Student s[], int num)
{
    for(int i = num / 2 * 2 - 1; i > 0; i -= 2)     /* on the left */
        printf("%s ", s[i]->name);
    for(int i = 0; i < num; i += 2)                 /* on the right */
        printf("%s%c", s[i]->name, i + 2 < num ? ' ' : '\n');
}

int main()
{
    /* read and sort data */
    int N, K;
    scanf("%d %d", &N, &K);
    Student *students = (Student*)malloc(N * sizeof(Student)), *p = students;
    for(int i = 0; i < N; i++)
    {
        students[i] = (Student)malloc(sizeof(struct student));
        scanf("%s %d", students[i]->name, &students[i]->height);
    }
    qsort(students, N, sizeof(Student), cmp);
    
    printrow(p, N - N / K * (K - 1));
    for(p += N - N / K * (K - 1); p < students + N; p += N / K)
        printrow(p, N / K);
    
    return 0;
}