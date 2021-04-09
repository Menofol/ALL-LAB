#include "stdio.h"
#include "math.h"

int main() {
  int n;
  float x;

  printf("Give n: ");
  scanf("%d", &n);
  printf("Give x: ");
  scanf("%f", &x);

    float j, i, s, p = 0;
    for (i = 1; i <= 10; i++)
    {
    for (s = 0, j = i; j <= 10; j++) 
    {
      s+=(n / i)-(j / x);
    }
    p += s;
    }
  printf("\tResult: \033[0;32m%2.2f\033[0;37m", p);
  return 0;
}
