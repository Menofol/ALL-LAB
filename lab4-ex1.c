#include <stdio.h> //connect lib
#include <math.h>

void red () {
  printf("\033[1;31m");
}
void white () {
  printf("\033[0;37m");
}

int main(void) {
    int y, z;
    float x, sum;
    while (1) {
    printf("\n Give y = ");
    scanf("%d", &y);
    printf("\n Give z = ");
    scanf("%d", &z);
        if (2*z*y==0 ) 
        {
            red();
            printf("\tDivision by 0...");
            white();
            continue;
        }
        else if ( (z-(3*y))/y < 0 )
        {
            red();
            printf("\tRoot cannot be negative");
            white();
            continue;
            }
        else {
            break;
        }
    };
    x = sqrt((2*(z-3*y)/y))-2*z*y;
    printf("\t Function value: \033[0;32m%2.2f", x);
    white();
    return 0;
};
    