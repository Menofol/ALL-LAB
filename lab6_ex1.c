#include "stdio.h"
#include <limits.h> // For INT_MIN
  
#define N 3
#define M 4
void white () {
  printf("\033[0;37m");
}
// Function to find largestInColum
int largestInColumn(int mat[N][M], int col)
{
        int maxm = mat[0][col];
        for (int j = 1; j < N; j++) {
            if (mat[j][col] > maxm)
                maxm = mat[j][col];
        }
        return maxm;
}
// Driver code
int main(void)
{
    int arr[N][M];
      int x;
      for (int i = 0; i < N; i++) {
        printf("\n\tWrite row [%d]: \n", i+1);
            for (int j = 0; j < M; j++) {
              printf("columns [%d]: ", j+1);
              scanf("%d", &x);
              arr[i][j] = x;
            }
        }
        int p = 1;
        for(int i = 0; i < M; i++) {
          p*= largestInColumn(arr, i);
        }
      printf("\n\tYour array:\n");
      for (int i = 0; i < N; i++) {
        int max = arr[i][0];
        printf("\n|");
        for (int j = 0; j < M; j++) {
          if (arr[i][j] > max) {
          max = arr[i][j];
          }

          if (j == M - 1) {
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
    
    printf("\tThe product of its maximum elements columns: \033[0;32m%d", p);
    white();
    return 0;
}