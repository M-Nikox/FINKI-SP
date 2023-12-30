/*
Во дадена датотека “broevi.txt” се запишани повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што означува колку броеви следуваат по него во тој ред. Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита 0.
*/

// 2. Zadachi za kolokvium
#include <stdio.h>
#include <string.h>
#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int countDigits(int n) {
    int ct = 0;

    while(n) {
        ct++;
        n /= 10;
    }

    return ct;
}

int power(int n) {
    int r = 1;
    for(int i = 0; i < n; i++) {
        r *= 10;
    }

    return r;
}

int main()
{
    wtf();
    
    // vashiot kod ovde
    FILE *f = fopen("broevi.txt", "r");
    int n = -1;

    while(!feof(f)) {
        fscanf(f, "%d", &n);

        // a - najznachajna cifra
        int niza[100], a = -1, broj = -1;

        for(int i = 0; i < n; i++) {
            fscanf(f, "%d", &niza[i]);
            int copy = niza[i];
            niza[i] = niza[i] / power(countDigits(niza[i]) - 1);

            if(niza[i] > a) {
                broj = copy;
                a = niza[i];
            }
        }

        if(broj == -1) break;

        printf("%d\n", broj);
    }

    return 0;
}
