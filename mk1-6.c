#include<stdio.h>//lib
#include<math.h>
//color
void white () {
  printf("\033[0;37m");
}

int main(void) {
int b, c; //variable
float a, p;
printf("\nEnter the first leg = ");
scanf("%d",&b);
printf("\nEnter the hytopenuse = ");
scanf("%d",&c);
a = (float)sqrt((c*c)-(b*b));
p = (float)a*sqrt((c*c)-(b*b))/2;
printf("\t Second leg = \033[0;32m\n");
printf("\t %2.f\n\n", a);
white();
printf("\t The area of the triangle = \033[0;32m\n");
printf("\t %2.f\n\n", p);
white();
return 0;
}