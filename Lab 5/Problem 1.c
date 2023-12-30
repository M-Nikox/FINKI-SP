/*
Со Морзеовата азбука, знаците (букви, цифри) се претставуваат со точки и цртички. Цифрите од 0 до 4 се претставуваат, соодветно, на следниот начин: "-----", ".----", "..---", "...--", "....-". Од тастатура се внесува даден природен број N (N<100 000), и потоа се внесуваат N други природни броеви. За секој од внесените броеви, во посебен ред, да се отпечати остатокот при делењето на тој број со 5 во Морзеов код.
*/

#include <stdio.h>
#include <stdlib.h>
/*
Со Морзеовата азбука, знаците (букви, цифри) се претставуваат со точки и цртички.
Цифрите од 0 до 4 се претставуваат, соодветно, на следниот начин: "-----", ".----", "..---", "...--", "....-".
Од тастатура се внесува даден природен број N (N<100 000), и потоа се внесуваат N други природни броеви.
За секој од внесените броеви, во посебен ред, да се отпечати остатокот при делењето на тој број со 5 во Морзеов код.
*/
int main()
{
    int n, i, broj;
    scanf("%d", &n);
    if (n>100000){
        return 0;
    }
    for (i=0; i<n; i++){
        scanf("%d", &broj);
        if((broj%5)==0){
            printf("-----\n");}
            else if((broj%5)==1){
                printf(".----\n");
            }
            else if((broj%5==2)){
                printf("..---\n");
            }
            else if((broj%5==3)){
                printf("...--\n");
            }
            else if((broj%5)==4){
                printf("....-\n");
            }
        }
    return 0;
}
