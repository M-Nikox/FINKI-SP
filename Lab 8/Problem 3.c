/*
Да се прочита број N од тастатура. Да се дефинира функција form(int n) што ќе испечати форма од ѕвезди како што е прикажано на сликата.

За да се освојат сите поени од вежбата, потребно е функцијата form да биде рекурзивна.
*/

#include <stdio.h>
#include <stdlib.h>
void form(int n){
    if (n>0){
        printf("*");
    }
    if (n==0){
        return;
    }
    return form(n-1);
}
int main() {
    int n;
    int i;
           scanf("%d", &n);
            for (i=n; i>0; i--){
                form(i);
                printf("\n");
            }
    return 0;
}
