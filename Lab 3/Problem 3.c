/*
Од тастатура се чита еден 2-цифрен број. Да се формира број чиј што цифри ќе бидат подредени од десно кон лево во растечки редослед.и да се испечати на екран неговиот степен.

Пример: Од бројот 12 треба да се формира бројот 21 и да се испечати на екран неговиот степен (441).

Напомена: Бројот секогаш ќе е двоцифрен.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int broj;
    int brojafter;
    int x,y;
    scanf("%d", &broj);
    if (broj<10||broj>99){
        return 0;
    }
    if ((broj/10)>(broj%10)){
        printf("%d", broj*broj);
    }
    else {
    x=broj/10;
    y=(broj%10)*10;
    brojafter=x+y;
    printf("%d", brojafter*brojafter);
    }
    return 0;
}
