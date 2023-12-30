/*
Од стандарден влез да се прочита една низа од знаци со најмногу 100 карактери. Да се трансформира низата така што левата и десната половина од стрингот ќе си ги сменат местата. 

Напомена: Сите тест примери ќе имаат парен број на знаци. 
*/

#include <stdio.h>
#include <string.h>
void swap(char *string){
    int i, k, len=strlen(string), mid=strlen(string)/2;
    char str_l[100];
    char str_d[100];
    for (i=0; i<mid; i++){
        str_l[i]=string[i];
    }
    for (i=mid, k=0; i<len; i++, k++){
        str_d[k]=string[i];
        string[i]=str_l[k];
    }
    for (i=0; i<mid; i++){
        string[i]=str_d[i];
    }
    string[len-1]='\0';
    printf("%s \n", string);
}
int main() {
    char str[100];
    int i,n;
    scanf("%d", &n);
    for (i=0; i<=n; i++){
        fgets(str, sizeof(str), stdin);
        swap(str);
    }
    return 0;
}
