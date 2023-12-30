/*
Мартин фрлал паричка пет пати и за секое фрлање запишал 5 или 0 за соодветно добиено петка или глава при фрлањето. Вие ги гледате броевите запишани од Мартин и треба да  отпечатите 1 доколку има добиено барем три пати глава при фрлањето на паричката, а во спротивно 0.
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	int moneymoneymoney[5];
	int br = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &moneymoneymoney[i]);
	}
	for (int i = 0; i < 5; i++) {
		if (moneymoneymoney[i] == 5) {
			br++;
		}
	}
	if (br < 3) {
		printf("%d", 1);
	}
	else printf("%d", 0);
	return 0;
}
