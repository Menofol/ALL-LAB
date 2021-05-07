#include<stdio.h>
void white () {
  printf("\033[0;37m");
}
void NumbersArrangedInDescending ( int arr [10] ) {
 
        int i, j, a, n;
        printf("Enter the value of \033[0;31mN\033[0;37m: ");
        scanf("%d", &n);
        printf("Enter the numbers: \n");
        for (int i=0; i<n; i++) {
        printf("a[\033[0;31m%d\033[0;37m] = ", i);
        scanf("%d", &arr[i]);
        }
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (arr[i] < arr[j]) 
                {
                    a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
        printf("\t\t\tResult: \n");
        printf("The numbers arranged in descending order are given below: ");
        for (i = 0; i < n; ++i) 
        {   
            printf("\n\t\t\t\033[0;32m%d", arr[i]);
            white();
        }
}

int main (void) {
    int arr[10];
    int v;
    printf("\nChoose a method to get the result: ");
    printf("\n\t1: Start;\n\t2: Exit.");
    printf("\n\tAnswer: ");
    scanf("%d", &v);
    if( v == 1 ) {
    NumbersArrangedInDescending(arr);
    }
    else {
        return 0;
    }
}