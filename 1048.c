#include<stdio.h>
#include<string.h>

char print[14] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};

void reab(char a[], char b[], long len);
void hand1(char a, char b);
void hand2(char a, char b);

int main()
{
    int flag = 1;
    char a[101], b[101];
    scanf("%s", a);
    getchar();
    scanf("%s", b);  
    getchar();  
    
    long len = (strlen(a) > strlen(b) ? strlen(a) : strlen(b));
    reab(a, b, len);
    //printf("%ld", len);
    //printf("%s  %s", a, b);
    

     if(len % 2){
         for(long i = 0; i < len; i++){
             //printf("%c %c %ld haa1\n", a[i], b[i], i);
             hand1(a[i], b[i]);
             i++;
             if(i == len){
                 break;
             }
             //printf("%c %c %ld aa2\n", a[i], b[i],i);
             hand2(a[i], b[i]);
         }
     }else{
         for(int i = 0; i < len; i += 2){
             hand2(a[i], b[i]);
             hand1(a[i + 1], b[i + 1]);
         }
    }

    return 0;
}

void reab(char a[], char b[], long len){
    long lena = strlen(a);
    long lenb = strlen(b);
    if(lena > lenb){
        int p = lena - lenb;
        for(int i = lenb - 1; i >= 0; i--){
            b[i + p] = b[i];
        }
        for(int i = 0; i < p; i++){
            b[i] = '0';
        }
        b[len] = '\0';
    }if(lenb > lena){
        int p = lenb - lena;
        for(int i = lena - 1; i >= 0; i--){
            a[i + p] = a[i];
        }
        for(int i = 0; i < p; i++){
            a[i] = '0';
        }
        a[len] = '\0';
    }
}

void hand1(char a, char b){
    int result = a + b - '0' - '0';
    result %= 13;
    printf("%c", print[result]);
}

void hand2(char a, char b){
    int result = (b - '0') - (a -'0');
    if(result < 0){
        result += 10;
    }
    printf("%c", print[result]);
}