#include <stdio.h> //connect lib
#include <math.h>

void red () {
  printf("\033[1;31m");
}
void white () {
  printf("\033[0;37m");
}
int main(void) {
    int a;
    float c; //local variable
    float b;
    metka:
    printf("\n Give a = ");
    scanf("%d", &a);
    if (a!=2 && a!=4 && a!=6)
    {
        red();
        printf("\nCannot calculate the value of the expression. Try again...\n" );
        white();
        goto metka;
    };
    printf("\n Give c = ");
    scanf("%f", &c);
    if (c!=2 && c!=4 && c!=6)
    {
        red();
        printf("Cannot calculate the value of the expression. Try again...");
        white();
        goto metka;
    };
    if (a==2)
        b=(float)(pow(a,2)-4*c)/(a*c);
    if (a==4)
        b=(float)(sqrt(a*c-2*a));
    if  (a==6)
        b=(float)((c*c)-2*a);
    printf("\tShorthand for the branch operator if: \033[0;32m%2.f\n", b);
    white();
    if (a==2)
        b=(float)(pow(a,2)-4*c)/(a*c);
    else if (a==4)
        b=(float)(sqrt(a*c-2*a));
    else
        b=(float)((c*c)-2*a);

    printf("\tShorthand for the branch operator if ... else: \033[0;32m%2.f", b);
    white();
    return 0;
}