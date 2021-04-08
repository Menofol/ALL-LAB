#include <stdio.h> //connect lib
#include <math.h>

int main(void) {

    int x, y;
    printf("Given A with coordinates of x: ");
    scanf("%d", &x);
    printf("Given A with coordinates of y: ");
    scanf("%d", &y);

    if ((x*y > 0))
    {
    printf((x>0 && y>0) ? "\t\033[0;32mSecond square\033[0;37m" : "\t\033[0;32mThird square\033[0;37m");
    }
    else if(x==0 || y==0)
    {
    printf("\t\033[0;32mMiddle of system of coordinat\033[0;37m");
    }
    else
    {
    printf ((x>0 && y<0) ? "\t\033[0;32mFour square\033[0;37m" : "\t\033[0;32mFirst square\033[0;37m");
    }
    return 0;
}