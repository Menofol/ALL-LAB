#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5
void white () {
  printf("\033[0;37m");
}
void diagonalsMax(int mat [n][n])
{
    // take length of matrix
    if (n == 0)
        return;
 
    // declare and initialize variables
    // with appropriate value
    int iM = 0, jM = 1, i, j;
    for(i = 0; i < n; i++) 
    for( j = i + 1; j < n; j++)
     if (mat[i][j] > mat[iM][jM]) {
         iM = i;
         jM = j;
      }
    printf("\nPrincipal Diagonal Greatest Element : \033[0;32m%d", mat[iM][jM]);
    white();
    printf("\nRow index num: \033[0;32m%d", iM);
    white();
    printf("\nColumn index num: \033[0;32m%d", jM);
    white();
}
// Driver code
int main(void)
{
    int i, v; // variable for working with an array in a loop
	int arr[n][n];
    printf("\nChose your variant for to resolve array:\n");
    printf("\t1: Between [-100/100];\n\t2: Exit\n");
    printf("\tAnswer: ");
    scanf("%d", &v);
	if ( v == 1 ){
    int arr[n][n];
      const int Low = -100;
      const int High = 100;
      srand(time(0));
	  printf("\n\tYour array: ");
      for (int i=0; i<5; i++) {
        printf("\n|");

        for (int j=0; j<5; j++) {
          arr[i][j] = Low/2 + rand()%High;

          if (j == 4) {
            printf("\033[0;32m%d", arr[i][j]);
            white();
            printf("|");
          }
          else {
            printf("\033[0;32m%d, ", arr[i][j]);
            white();
          }
        }
      }
	  printf("\n\tResult: ");
	  diagonalsMax(arr);
	}
	else {
		return 0;
	}
    return 0;
}