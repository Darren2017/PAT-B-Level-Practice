#include <stdio.h>
#include <string.h>

int main()
{
    int nBase, nA, nB, nS = 21, base, a, b;
    char sBase[21] = {0}, sA[21] = {0}, sB[21] = {0}, sSum[22] = {0};

    scanf("%s %s %s", sBase, sA, sB);
    
    nBase = strlen(sBase);
    nA = strlen(sA);
    nB = strlen(sB);
    
    for(int i = 0; i < nBase; i++)
    {
        a = nA <= i ? 0 : sA[nA - i - 1] - '0';
        b = nB <= i ? 0 : sB[nB - i - 1] - '0';
        base = sBase[nBase - i - 1] - '0';
        base = base == 0 ? 10 : base;
        sSum[nS - i - 1] += a + b;
        sSum[nS - i - 2] += sSum[nS - i - 1] / base;
        sSum[nS - i - 1] = sSum[nS - i - 1] % base;
    }
    
    for(int i = 0; i < 21; i++)
        sSum[i] += '0';
    
    for(int first = 0; first < 21; first++) 
        if(sSum[first] != 0 && sSum[first] != '0')
        {
            puts(sSum + first);
            return 0;
        }
    printf("0");
    return 0;
}