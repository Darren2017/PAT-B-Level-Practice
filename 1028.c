#include<stdio.h>
#include<string.h>

int years(char times[]){
    int year = 0;
    int i;
    for(i = 0; i < 4; i++){
        year = year * 10 + times[i] - '0';
    }
    return year;
}

int months(char times[]){
    int month = 0;
    int i;
    for(i = 5; i < 7; i++){
        month = month * 10 + times[i] - '0';
    }
    return month;
}

int days(char times[]){
    int day = 0;
    int i;
    for(i = 8; i < 10; i++){
        day = day * 10 + times[i] - '0';
    }
    return day;
}

int main()
{
    int a, i = 0, cnt = 0;
    int b = 1;
    int max = 1, min = 1;
    int year[100000] = {0};
    int month[100000] = {0};
    int day[100000] = {0};
    char name[100000][6];
    char times[100000][12];
    scanf("%d", &a);
    for(i = 1; i <= a; i++){
        scanf("%s", name[i]);
        getchar();
        scanf("%s", times[i]);
        getchar();
        year[i] = years(times[i]);
        month[i] = months(times[i]);
        day[i] = days(times[i]);

        if(year[i] < 1814){
            continue;
        }
        if(year[i] == 1814){
            if(month[i] < 9){
                continue;
            }
            if(month[i] == 9){
                if(day[i] < 6){
                    continue;
                }
            }
        }
        if(year[i] > 2014){
            continue;
        }
        if(year[i] == 2014){
            if(month[i] > 9){
                continue;
            }
            if(month[i] == 9){
                if(day[i] > 6){
                    continue;
                }
            }
        }
        if(b == 1){
            max = i;
            min = i;
            b ++;
        }
        cnt++;
        if (year[i] < year[max]){
            max = i;
        }
        if(year[i] == year[max]){
            if(month[i] < month[max]){
                max = i;
            }
            if(month[i] == month[max]){
                if(day[i] < day[max]){
                    max = i;
                }
            }
        }
        if(year[i] > year[min]){
            min = i;
        }
        if(year[i] == year[min]){
            if(month[i] > month[min]){
                min = i;
            }
            if(month[i] == month[min]){
                if(day[i] > day[min]){
                    min = i;
                }
            }
        }
    }

    printf("%d %s %s", cnt, name[max], name[min]);


    return 0;
}