#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void white () {
  printf("\033[0;37m");
}

int sum(int arr[], int n)
{
    int sum = 0; // initialize sum
 
    // Iterate through all elements
    // and add them to sum
    for (int i = 0; i < n; i++)
    sum += arr[i];
 
    return sum;
}
void EvenOddSum(int arr[], int e)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i < e; i++) {
        // Loop to find even, odd sum
        if (i % 2 == 0)
            even += arr[i];
        else
            odd += arr[i];
    }
    int oddSum = 0,evenSum = 0, oddCount = 0,evenCount = 0, i = 0;
    double averageeven, avarageodd;

    while(i<6){       
        if(arr[i] % 2 == 0){
        evenSum = evenSum+ arr[i];     
        evenCount++;
        }
    else{
             oddSum=oddSum+arr[i];     
             oddCount++;
        }
         i++;
    }
    averageeven = evenSum / evenCount;
    avarageodd = oddSum / oddCount;

    printf("\tEven index positions sum: \033[0;32m%d\n", even);
    white();
    printf("\tOdd index positions sum: \033[0;32m%d\n", odd);
    white();
    printf("\tThe average of even numbers are: \033[0;32m%.2f\n", averageeven);
    white();
    printf("\tThe average of odd numbers are: \033[0;32m%.2f\n", avarageodd);
    white();

}
 
int main(void)
{
    int arr[10]; // declaring an integer array a with 10 elements
    int i, v; // variable for working with an array in a loop
    int e = sizeof(arr) / sizeof(arr[0]);
    int n = sizeof(arr) / sizeof(arr[0]);
    int r = sizeof(arr) / sizeof(arr[0]);
    srand(time(NULL));
    
    printf("\nChose your variant for to resolve array:\n");
    printf("\t1: Between [-100/100];\n\t2: For enter your array\n");
    printf("\tAnswer: ");
    scanf("%d", &v);
    if ( v == 2 ){
    for (i=0; i<10; i++)
    {
    printf("a[%d] = ", i);
    scanf("%d", &arr[i]);
    }
    }
    else {
      const int low = -100;
      const int High = 100;
      for(i=0; i<10; i++) {
         arr[i]= low/2 +rand()%High;
      }
   }
   int nsum = 0, psum = 0;
   for(i=0; i<10; i++) {
     if(arr[i]<0) nsum += arr[i];
     else psum += arr[i];
   }
    printf("\n\t\t\t\tResult\n");
    puts("______________________________________________________________\n");
        printf("\tYour array: {");
        for (i = 0; i<=9; i++) {
            if (i == 9) {
            printf("\033[0;32m%d", arr[i]);
            white();
            }
            else {
            printf("\033[0;32m%d, ", arr[i]);
            white();
            }
        }
        printf("}\n");
        puts("______________________________________________________________\n");
    printf("\tAll Positive numbers sum: \033[0;32m%d\n", psum);
    white();
    printf("\tSum of given array is: \033[0;32m%d\n", sum(arr, n));
    white();
    EvenOddSum(arr, n);
    return 0;
}
