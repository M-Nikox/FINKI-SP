/*
Да се напише програма во која што се внесува еден четирицифрен и еден трицифрен број. Да се отпечати 1 доколку сумата на цифрите на првиот број е поголема од сумата на цифрите на вториот број, во спротивно 0. 
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int cc, tc;
    int sum_cc=0;
    int sum_tc=0;
    scanf("%d %d", &cc, &tc);
    while (cc!=0){
        sum_cc+=cc%10;
        cc/=10;
    }
    while (tc!=0){
        sum_tc+=tc%10;
        tc/=10;
    }
    printf("%d", sum_cc>sum_tc);
    return 0;
}
