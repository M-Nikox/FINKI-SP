/*
Од тастатура се внесуваат цели броеви се додека не се внесе нешто што не е цел број.

Да се испечати на екран сумата на броевите во кои цифрите се подредени во опаѓачки редослед. Доколку нема такви броеви, да се испечати порака NEMA.

Објаснување на примерот:

Во првиот пример, нема ниту еден број во кој цифрите се подредени во опаѓачки редослед, па се печати NEMA.

Во вториот пример, во 4321, 21 и 81, цифрите се подредени во опаѓачки редослед, па се печати нивната сума 4423.
*/

#include <stdio.h>

#include <stdlib.h>

int main() {
      int n, temp, s = 0;
      int x,y;

  while (scanf("%d", & n)) {
    temp = n;
    int y = 10;
    int obratno = 0;

        while (n > 0) { //prevrtuvanje na brojot
          int perc = n % 10;
          obratno = obratno * 10 + perc;
          n = n / 10;
          //printf("n: %d obratno: %d", n, obratno);
        }

        while (obratno > 0) { //proverka za dali se rastechki ili opagjachki
          x = obratno % 10;
          if (y <= x) {
            break;
          }
          y = x;
          obratno /= 10; //deli se dodeka ne stigne do 0/lower
          //printf("X: %d obratno: %d Y: %d", x, obratno, y);
        }

        if (obratno <= 0) { //dodadi ja vrednosta na temp (zema first value n) dokolku obratno pri delenje e pomalo ili ednakvo na 0
          s = temp + s;
          //printf("%d %d", s, obratno);
        }

    }

      if (s != 0) { //finalna proverka
        printf("%d", s);
      } else {
        printf("NEMA");
      }

  return 0;
}
