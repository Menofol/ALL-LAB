#include <stdio.h>
#include <math.h>

void red () {
  printf("\033[1;31m");
}
void white () {
  printf("\033[0;37m");
}

int main(void) {
  float dx, y, a, b; // variables declaration

  while (1) {
    printf("Enter the lower limit of the interval: ");
    scanf("%f", &a);
    printf("Enter the upper limit of the interval: ");
    scanf("%f", &b);
    printf("Enter the interval step: ");
    scanf("%f", &dx);

    if (a + dx < b) {
      printf("The lower limit: ");
      printf("\033[0;37m%2.f\n", a);
      white();

      printf("The upper limit: ");
      printf("\033[0;37m%2.f\n", b);
      white();

      printf("The interval step: ");
      printf("\033[0;37m%2.1f\n", dx);
      white();
      printf(" X\t\tY\n");
      while (a <= b) {
        y = (float)(-6*a+pow(a,4)/(2*a));

        printf("\033[0;32m%2.1f\t\t%2.1f\n", a, y);
        a += dx;
        white();
      }
      break;
    }
    else 
    {
        red();
        printf("\nIncorrect lower and upper bounds entered. Try againg...\n");
        white();
        continue;
    }
  }

  return 0;
}