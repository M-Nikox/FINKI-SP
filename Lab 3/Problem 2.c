/*
Од тастатура се внесуваат 3 производи во формат: цена, тип на данок, каде што цената е внесена како цел број, додека типот на данок се внесува како мала или голема буква, и притоа

    тип A или a изнесува 18%
    тип B или b изнесува 5%
    тип V или v изнесува 0%

Да се испечати вкупното ДДВ кое што треба да се плати за тие производи. ДДВто се пресметува како процент од цената на самиот производ.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cena1,cena2,cena3;
    char ddv1,ddv2,ddv3;
    float suma=0;
    scanf("%d %c", &cena1, &ddv1);
    scanf("%d %c", &cena2, &ddv2);
    scanf("%d %c", &cena3, &ddv3);

    if (ddv1=='A'||ddv1=='a'){
        suma+=cena1*0.18;
    }
    else if (ddv1=='B'||ddv1=='b'){
        suma+=cena1*0.05;
    }
    else if (ddv1=='V'||ddv1=='v'){
        suma+=cena1*0.0;
    }

    if (ddv2=='A'||ddv2=='a'){
        suma+=cena2*0.18;
    }
    else if (ddv2=='B'||ddv2=='b'){
        suma+=cena2*0.05;
    }
    else if (ddv2=='V'||ddv2=='v'){
        suma+=cena2*0.0;
    }

    if (ddv3=='A'||ddv3=='a'){
        suma+=cena3*0.18;
    }
    else if (ddv3=='B'||ddv3=='b'){
        suma+=cena3*0.05;
    }
    else if (ddv3=='V'||ddv3=='v'){
        suma+=cena3*0.0;
    }
        printf("%.2f", suma);
    return 0;
}
