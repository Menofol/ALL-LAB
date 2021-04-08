#include <stdio.h> //connect lib
#include <math.h>

void red () {
  printf("\033[1;31m");
}
void white () {
  printf("\033[0;37m");
}

int main(void) {
    int x, y;
    float f;
    point:
    printf("\n Give x = ");
    scanf("%d", &x);
    printf("\n Give y = ");
    scanf("%d", &y);
    if (x==0 || y==0)
    {
        red();
        printf("\tDivision by 0. Try againg...");
        white();
        goto point;
    }
    else if (x<0 || y<0)
    {
        red();
        printf("\tThe square root of a negative number does not exist. Try againg...");
        white();
        goto point;
    }

    f = (float)((x*x)+log(2)*(x*y)-y*y)/(1+(x*x)+(y*y));
    printf("\t Function value: \033[0;32m%2.2f", f);
    white();
    return 0;
}