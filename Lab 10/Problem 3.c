/*
Да се напише програма која што од датотека со име "text.txt" ќе ги одреди и ќе ги испечати на стандарден излез:

    релативната фреквенција на сите мали букви
    релативната фреквенција на сите големи букви

Релативната фреквенција на даден(и) карактер(и) се пресметува како количник на вкупното појавување на тој/тие карактер/и со вкупниот број на карактери во текстот (да се игнорираат празните места и специјалните знаци).

Да не се менува функцијата writeToFile().
*/

#include <stdio.h>
#include <ctype.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();

    // vasiot kod ovde

    FILE *f = fopen("text.txt", "r");
    int total = 0;
    double cl=0, cu=0;
    char c;

    while((c = fgetc(f)) != EOF) {
        if (isalpha(c)) {
            total++;
            if (islower(c)) {
                cl++;
            }
            else if (isupper(c)) {
                cu++;
            }
        }
    }

    fclose(f);
    double rll = cl / total;
    double rlu = cu / total;
    printf("%.4lf\n", rlu);
    printf("%.4lf\n", rll);
    return 0;
}
