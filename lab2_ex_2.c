#include <stdio.h> //conenct lib
#include<locale.h>
#include<math.h>



int main() {
    const int a = -25; //local variable
    const int b = 2;
    const int c = 3;

    int y;

    y = ((c*a)/(a+b))+((b*c)/(c+a));
    printf("\t y \n");
    printf("\t %d\n", y);
    return 0;
}