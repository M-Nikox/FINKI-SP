/*
Од стандарден влез се вчитува број N, а потоа и N цели броеви. 

Да се испечати на екран најголемата разлика помеѓу два последователно внесени броја.

Да се реши без користење на низи!

Објаснување на примерот:
N=5, па се внесуваат 5 броја: 1,3,0,5,2. Разликите се соодветно:
3-1 = 2
0-3 = -3
5-0 = 5
2-5 = -3

Најголема разлика е 5.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, broj;
  int i=0;
  int temp;
  int raz=0;
  scanf("%d %d %d", &n, &temp, &broj); //vnesi n za interval, pomoshna promenliva shto chuva broj i samiot broj
  raz = broj - temp;
  temp=broj;
    while(i<n-2) {
        scanf("%d", &broj);
        if (raz <= broj - temp) {
          raz = broj - temp;
        }
        temp = broj;
        i++;
      }

    printf("%d", raz);

  return 0;
}
