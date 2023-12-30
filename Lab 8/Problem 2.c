/*
text
Од тастатура се вчитуваат броевите A и B. На екран да се испечатат сите броеви од интервалот [A,B] кои се палиндроми и се составени само од цифрите 0,1,2,3 и 4. 

Предлог за работа: 

    Да се имплементира функција reverseNumber (int number) која ќе го пресмета обратниот број на определен број number.
    Да се имплементира функција isPalindrome (int number) која ќе врати 1 доколку бројот number е палиндром, а 0 во спротивно
    Да се имплементира функција containsDigits (int number) која ќе врати 1 доколку сите цифри во бројот се 0,1,2,3 или 4, а 0 во спротивно. 
    Да се искористат функциите isPalindrome и containsDigits во main функцијата

Дополнително: Направете ја функцијата containsDigits рекурзивна.
*/

#include <stdio.h>
int reverseNumber(int number){
    int rev = 0;
    int temp=number;
    while (temp!=0){
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    return rev;
}
int isPalindrome(int number){
    if (number==reverseNumber(number)){
        return 1;
    } else return 0;
}

int containsDigits(int number){
    if(!number){
        return 1;
    }
    if((number%10)>4){
        return 0;
    }
    return containsDigits(number/10);
}
int main() {
    int a,b;
    int i;
    scanf("%d %d", &a, &b);
    for (i=a; i<b; i++){
        if(isPalindrome(i) && containsDigits(i)){
            printf("%d\n", i);
        }
    }
    return 0;
}
