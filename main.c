#include <stdio.h> //подключение библиотек
#include<locale.h>
#include<math.h>



int main(void) {
    int a; //объявления локальных переменных
    int b;
    int c;
    int s;
    int p;
    setlocale(LC_CTYPE, "eng"); //подклчючение кириллицы
    printf("\n specify the length of the rock a =");
    scanf("%d", &a);
    printf("\n specify the length of the hypotinus c =");
    scanf("%d", &c);
    b = sqrt(pow(c, 2) - pow(a, 2));
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("\t b \ts \n");
    printf("\t %d\t%d\n", b, s);
    return 0;
}
