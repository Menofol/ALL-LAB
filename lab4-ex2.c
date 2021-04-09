#include <stdio.h>
#define iMAX  30
#define iMIN -50
void white () {
  printf("\033[0;37m");
}
void red () {
  printf("\033[1;31m");
}
int main(void) {
      int x,sum,i;
      puts("Give a number for -50, 30: ");
      scanf("\t%d", &x);
      if (x < iMIN || x > iMAX )
        return puts("\033[1;31mOut of range.\033[0;37m");
        printf("\tRange of \033[0;32m%d\033[0;37m - \033[0;32m%d\033[0;37m", x, iMAX);
        puts("\n_______________________________\n");
        white();
      if(x&1) ++x;
    
      for(sum=0, i=x; i<=iMAX; i+=2) sum += i;
        printf("\tWith for: \033[0;32m%d\n", sum);
        white();
      sum=0;
      i=x-2;
      while((i+=2)<=iMAX) sum += i;
        printf("\tWith while: \033[0;32m%d\n", sum);
        white();
      sum=0;
      i=x;
      do { sum += i; } while((i+=2)<=iMAX);
          printf("\tWith do-while: \033[0;32m%d\n", sum);
          white();
          puts("_______________________________");
return 0;
}