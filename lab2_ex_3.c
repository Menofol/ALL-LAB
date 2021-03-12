#include <stdio.h> //conenct lib
#include<locale.h>
#include<math.h>



int main(void) {
    int y; //local variable
    int z;
    int x;
    int t;
    setlocale(LC_CTYPE, "eng"); //conect cirik
    printf("\n Give y =");
    scanf("%d", &y);
    printf("\n Give z =");
    scanf("%d", &z);
    t = sqrt((x+y)%z+y%(z-y))+y*pow(z,2)+y*2;
    printf("\t t \n");
    printf("\t %d\n", t);
    return 0;
}