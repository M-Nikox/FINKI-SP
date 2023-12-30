/*
Од стандарден влез се вчитува бројот N, бројот K и знакот C. Потоа се вчитуваат N текстуални низи (секоја во нов ред). 
Да се испечатат на екран текстуалните низи кои го содржат знакот C точно K пати без разлика на големината на буквата.
Ако нема такви низи, да се испечати порака NONE.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n, k;
    int flag = 0;
    char str[100];
    char c;
    scanf("%d %d %c", &n, &k, &c);
    c=tolower(c);
    for (int i = 0; i <= n; i++) {
        int br = 0;
        fgets(str, 99, stdin);
        for (int j = 0; j < strlen(str); j++) {
            if (tolower(str[j]) == c) {
                br++;
            }
        }
        if (br == k) {
            printf("%s", str);
            flag = 1;
        }
    }
    if (!flag) {
        printf("NONE");
    }
    return 0;
}
