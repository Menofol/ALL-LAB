#include <stdio.h> //lib
#include <math.h>
//colors
void red () {
  printf("\033[1;31m");
}
void green () {
    printf("\033[0;32m");
}
void white () {
  printf("\033[0;37m");
}

int main(void) {
    int x, y, j, k, p; //variable

    double z;
    metka: //point
    printf("\n Give x = ");
    scanf("%d", &x);
        if (x<0)
        {
        red();
        printf("\nError! You must give positive num\n" );
        white();
        goto metka;
        };
    printf("\n Give y = ");
    scanf("%d", &y);
        if (y<0)
        {
        red();
        printf("\nError! You must give positive num\n");
        white();
        goto metka;
        };
    printf("\n Give j = ");
    scanf("%d", &j);
        if (j<0)
        {
        red();
        printf("\nError! You must give positive num\n");
        white();
        goto metka;
        };
    printf("\n Give k = ");
    scanf("%d", &k);
        if (k<0)
        {
        red();
        printf("\nError! You must give positive num\n");
        white();
        goto metka;
        };
    printf("\n Give p = ");
    scanf("%d", &p);
        if (p<0)
        {
        red();
        printf("\nError! You must give positive num\n");
        white();
        goto metka;
        };
    z = (x+y+j+k+p)/5;
    printf("\t Arithmetic of 5 number:\033[0;32m%2.f", z);
    white();
    return 0;
}