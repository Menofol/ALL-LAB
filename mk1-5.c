#include<stdio.h>//lib
#include<math.h>
//color
void white () {
  printf("\033[0;37m");
};

int main(void) {
int x; //variable
float z;
printf("\nGive x: ");
scanf("%d",&x);
z = (float)pow(x,4)/(sqrt(fabs(x-10))-pow(x,2));
printf("Compute x =\033[0;32m %2.f", z);
white();
return 0;
}