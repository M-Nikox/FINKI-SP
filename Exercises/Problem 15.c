/*
Дадена е текстуална датотека (livce.txt) која претставува ливче во спортска обложувалница.

На почетокот во датотеката, во посебен ред е запишана сумата на уплата (цел број).

Потоа во секој ред од датотеката е запишан по еден тип во следниот формат:

ab12 1 1.25

Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).

Ваша задача е да се испечати типот со најголем коефициент како и можната добивка на ливчето. Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.

Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
    // vasiot kod pocnuva od ovde

    FILE* f=fopen("livce.txt", "r");

    int t, n;
    char id[10];
    float cf;

    fscanf(f, "%d", &n);

    float maxcoef;
    char idmax[10];
    int tmax;
    float sum=n;

    while(!feof(f)){
        fscanf(f, "%s%d%f\n", id, &t, &cf);
        sum*=cf;
            if (maxcoef<cf){
                maxcoef=cf;
                strcpy(idmax, id);
                tmax=t;
            }
    }
    printf("%s %d %.2f\n", idmax, tmax, maxcoef);
    printf("%.2f", sum);
    fclose(f);
    return 0;
}
