/*
Во датотеката podatoci.txt се запишани редови со низи од знаци (секој не подолг од 80 знаци).

Од стандарден влез се читаат два знака z1 и z2. Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред од датотеката составени од знаците што се наоѓаат меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.

Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// ne menuvaj ovde
void wf() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}
int main() {
    wf();
    FILE* f=fopen("podatoci.txt", "r");
    char str[100];
    char a[3];
    scanf("%s", a);
    if(strlen(a) == 1) {
        a[1] = a[0];
        a[0] = ' ';
    }
    char z1 = a[0], z2 = a[1];
    int flag=0;
    int i;
    while(!feof(f)){
        fgets(str, 100, f);
        if (strlen(str)<=1) continue;
        if(feof(f)) break;
        for (i=0; i<strlen(str); i++){

            if(flag==1){
                printf("%c", str[i]);
            }
            if(str[i]==z1){
                flag=1;
            }
            if(str[i+1]==z2){
                break;
            }
        }
        printf("\n");
        flag=0;
    }
    fclose(f);
    return 0;
}
