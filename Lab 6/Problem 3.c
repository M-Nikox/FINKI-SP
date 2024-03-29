/*
Од тастатура се внесува низа од целобројни елементи А со должина N ( N <= 100). Дополнително се внесува и број К. Да се трансформира низата така што на почеток ќе се преместат сите елементи помали од K, а после нив ќе следуваат броевите поголеми или еднакви на K. Редоследот на елементите да не се менува.

Испечатете ги елементите на трансформираната низа во еден ред на стандарден излез разделени со празно место.

Пример:
A[] = {1, 3, 2, 5, 9, 0, 8, 10}, K=6
Трансформираната низа ќе биде:
A[] = {1, 3, 2, 5, 0, 9, 8, 10}

A[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}, K=6
Трансформираната низа ќе биде:
A[] = {5, 4, 3, 2, 1, 0, 10, 9, 8, 7, 6}

A[]={2, 4, 6, 8, 10}, K = 5
Трансформираната низа ќе биде:
A[] = {2, 4, 6, 8, 10}

A[]={1, 3, 5, 7, 9} K = 5
Трансформираната низа ќе биде:
A[] = {1, 3, 5, 7, 9}

*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100];
    int n, k;
    int i=0;

    scanf("%d", &n);

    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);
    
    for (i=0; i<n; i++){
        if (a[i]<k){
            printf("%d ", a[i]);
        }
    }
    
    for (i=0; i<n; i++){
        if (a[i]>=k){
            printf("%d ", a[i]);
        }
    }
    
    return 0;
}
