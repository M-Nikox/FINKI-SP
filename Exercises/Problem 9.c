/*
Да се провери дали одреден внесен шестцифрен број е симетричен. Тоа значи првата цифра на бројот да е еднаква со последната, втората цифра со претпоследната… Пример за симетрични броеви: 12321, 805508, 999999. Да се врати ДА ако е симетричен, НЕ ако не е симетричен.
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d", &a);
    int rev=0;
    int ost;
    int temp=a;
    while(temp!=0){
        rev=(rev*10)+(temp%10);
        temp/=10;
    }
    if (a==rev){
        printf("1");
    } else printf("0");
    return 0;
}

//zadachata ne raboti, inaku e tochna vo codeblocks, online c, clion
