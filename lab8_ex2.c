#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define m 4
#define n 5
void white () {
  printf("\033[0;37m");
}
void random(int arr[m][n]) { // YOUR RANDOM ARRAY
      const int Low = -100;
      const int High = 100;
      srand(time(0));
      for ( int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
          arr[i][j] = Low/2 + rand()%High;
        }
      }
      printf("\n\tYour array: ");
}
void ArrayBetween(int arr[m][n]) { // OUTPUT YOUR ARRAY
          for (int i=0; i<m; i++) {
          printf("\n|");
        for (int j=0; j<n; j++) {
          if (j == 4) {
            printf("%d", arr[i][j]);
            printf("|");
          }
          else {
            printf("%d, ", arr[i][j]);
          }
        }
      }
}
int colMaxSum(int mat[m][n]) // FIND MAX OF COLUMN
{
    int idx = -1;
    int maxSum = INT_MIN;
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += mat[j][i];
        }
        if (sum > maxSum) {
            maxSum = sum;
            idx = i;
        }
    }
    printf("\nColumn: \033[0;32m%d", idx);
    white();
    printf("\nHas max sum \033[0;32m%d", maxSum);
    white();
}
void enter(int arr[m][n]) { // YOUR ENTERED ARRAY
        int x;
        for (int i = 0; i < m; i++) {
        printf("\n\tWrite row [%d]: \n", i+1);
            for (int j = 0; j < n; j++) {
              printf("columns [%d]: ", j+1);
              scanf("%d", &x);
              arr[i][j] = x;
            }
        }
        printf("\n\tYour array: ");
}
void ResultRandom (int arr[m][n]) { // END
      random(arr);
      ArrayBetween(arr);
      printf("\n\tResult: ");
      colMaxSum(arr);
}
void ResultEntred (int arr[m][n]) { // END
      enter(arr);
      ArrayBetween(arr);
      printf("\n\tResult: ");
      colMaxSum(arr);
}
// Driver code
int main()
{
    int arr[m][n];
    int v;
    printf("\nChoose a method to get the result: ");
    printf("\n\t1: Between [-100/100];\n\t2: Enter your array;\n\t3: Exit.");
    printf("\n\tAnswer: ");
    scanf("%d", &v);
    if ( v == 1) {
      ResultRandom(arr);
    }
    else if ( v == 2 ) {
      ResultEntred(arr);
    }
    else {
      return 0;
    }
    return 0;
}