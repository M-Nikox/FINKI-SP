/*
Дадена е текстуална датотека text.txt.

Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката. Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки.

Пример: за датотеката:

IO is short for Input Output
medioio medIo song

излез:

io
ou
io
oi
io
io
6

*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int isvowel(char a){
    switch(tolower(a)){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': return 1;
        default: return 0;
    }
}

int main()
{
    writeToFile();

    FILE *f=fopen("datoteka.txt","r");
    char c;
    char temp;
    int br=0;
    while(!feof(f)) {
        if(feof(f)) break;
        c = fgetc(f);
        if (temp==c){
            printf("%c%c\n", temp, c);
            br++;
        }
        temp=c;
    };
    printf("%d", br);
    fclose(f);
}
