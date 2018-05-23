#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main()
{
    double r1, p1, r2, p2, a1, b1, a2, b2, a, b;
    cin >> r1 >> p1 >> r2 >> p2;
    a1 = r1 * cos(p1),
    b1 = r1 * sin(p1);
    a2 = r2 * cos(p2);
    b2 = r2 * sin(p2);
    a = a1 * a2 - b1 * b2;
    b = a1 * b2 + b1 * a2;
    
    if (fabs(a) < 0.01) a = 0;
    if (fabs(b) < 0.01) b = 0;
    if(b < 0){
        printf("%.2f-%.2fi", a, fabs(b));
    }else{
        printf("%.2f+%.2fi", a, fabs(b));
    }
    
    return 0;
 }