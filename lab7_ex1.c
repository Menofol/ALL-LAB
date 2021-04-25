#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

void white () {
  printf("\033[0;37m");
}

float areaOfInscribedCircle(float a)
{
    return ( PI / 4 ) * a * a;
}
  
// Driver's code
int main()
{
    float a;
    printf("\nGiven by the length of its side: ");
    scanf("%f", &a);
    printf("\n\tResult: \n");
    printf("The length inscribed in it: \033[0;32m%2.2f\n", (a));
    white();
    printf("Area of an inscribed circle: \033[0;32m%2.2f", areaOfInscribedCircle(a));
    white();
           
    return 0;
}