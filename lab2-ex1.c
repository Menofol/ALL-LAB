#include <stdio.h> //conenct lib
#include<locale.h>
#include<math.h>



int main(void) {
    int y; //local variable
    int x;

    float t;
    float z;
    float f;

    setlocale(LC_CTYPE, "eng"); //conect cirik
    printf("\n Give x =");
    scanf("%f", &x);
    printf("\n Give y =");
    scanf("%f", &y);
    z = (float)pow(x,2)*pow(y,2);
    t = (float)(pow(x,2)+pow(y,2)*2);
    f = (float)((x+y)/2);
    printf("\t Arithmetic mean of the 1st and 2nd: \n");
    printf("\t %2.f \n\n", z);
    printf("\t The difference of the squares of the 1st and 2nd: \n");
    printf("\t %2.f \n\n", t);
    printf("\t Product of the 2nd and the sum of numbers: \n");
    printf("\t %2.f \n\n", f);
    
    return 0;


}