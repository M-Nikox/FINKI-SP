/*
Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100). На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0. Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.

Пример:
 111100110011
 

1 ред + 1 колона = 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    int n,m;
    int i,j;
    int a[100][100];
    scanf("%d %d", &n, &m);
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int totalrow=0, totalcol=0;
            for (i=0; i<n; i++) {
                for (j = 0; j < m; j++) {
                        if ((a[i][j] == 1) &&(a[i][j+1] == 1)&&(a[i][j+2] == 1)) {
                            ++totalrow;
                            break;
                        }
                    }
            }
            for (i=0; i<m; i++) {
                for (j = 0; j < n; j++) {
                    if ((a[j][i] == 1) &&(a[j+1][i] == 1)&&(a[j+2][i] == 1)) {
                        ++totalcol;
                        break;
                    }
                }
            }
        printf("%d", totalcol+totalrow);
    return 0;
}
