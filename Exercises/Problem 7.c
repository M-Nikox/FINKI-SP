/*
Да се напише програма каде што се внесува код, цена на производ и сума која што корисникот ја има. 

Последните две цифри од кодот означуваат колку % ддв треба да се наплати. 

Да се пресмета вкупната цена која што корисникот треба да ја плати и да се испечати 1 доколку има пари да ја плати сумата, а во спротивно 0. Задачата да се реши со логички операции, без if-else.
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	int kod,cena,suma;
	scanf("%d %d %d", &kod, &cena, &suma);
    float ddv=kod%100;
	ddv/=100;
	float temp=cena*ddv;
	printf("%.2f\n%d", temp+cena,suma>(temp+cena));
	return 0;
}
