/*
Се внесува време во македонска форма (3 вредности: час - од 0 до 23, минути – од 0 до 59, и секунди – од 0 до 59). Да се презентира времето во интернационална форма во која за 0 часот стои 12, од 13 часот до 23 се всушност од 1 до 11, а на крајот стои AM доколку времето е претпладне (од 0:00:00 до 11:59:59) и PM доколку времето е попладне (од 12:00:01 до 23:59:59). За времето на пладне (12:00:00) после него се печати NOON.

Формата за точен излез може да се види во тест примерите.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m,s;
    int flag=0; //0 AM | 1 PM | 2 NOON
        scanf("%d %d %d", &h, &m, &s);
    if (h==12){
        flag=2;
    }
    else if (h==0){
        h=12;
        flag=0;
        }
    else if(h<12){
        flag=0;
    }
    else if (h>12){
        h-=12;
        flag=1;
    }
    if(flag==0){
        if(h>=0&&h<=9){
            printf("0%d:",h);
        } else printf("%d:", h);
        if (m>=0&&m<=9){
            printf("0%d:",m);
        } else printf("%d:", m);
        if (s>=0&&s<=9){
            printf("0%d", s);
        } else printf("%d", s);
        printf("AM");
    }
    
    if(flag==1){
        if(h>=0&&h<=9){
            printf("0%d:",h);
        } else printf("%d:", h);
        if (m>=0&&m<=9){
            printf("0%d:",m);
        } else printf("%d:", m);
        if (s>=0&&s<=9){
            printf("0%d", s);
        } else printf("%d", s);
        printf("PM");
    }
    
    if(flag==2){
         if(h>=0&&h<=9){
            printf("0%d:",h);
        } else printf("%d:", h);
        if (m>=0&&m<=9){
            printf("0%d:",m);
        } else printf("%d:", m);
        if (s>=0&&s<=9){
            printf("0%d", s);
        } else printf("%d", s);
        printf("NOON");
    }
    
    return 0;
}
