#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
void white () {
  printf("\033[0;37m");
}
void enter(int arr[10]) { // Entered your array
        for (int i=0; i<10; i++) {
            printf("a[%d] = ", i);
            scanf("%d", &arr[i]);
        }
        printf("\n\t\tResult: ");
        printf("\nYour array: ");
}
void ArrayBetween(int arr[10]) { // Show your array in relult
    printf("{");
    for (int i=0; i<10; i++) {
        if (i == 9) {
        printf("%d", arr[i]);
        white();
        }
        else {
        printf("%d, ", arr[i]);
        white();
        }
    }
    printf("}");
}
void NegativeProduct(int arr[10]) { // Negative product to negative
    int result = 1; // Variable for save product
    for (int i = 0; i < 10; i++){
        if (arr[i] < 0) result *= arr[i];
        // If number less 0 than product our number
    }
    printf("\nAll negative product: \033[0;32m%d", result);
    white();
}
void result (int arr[10]) {
    enter(arr);
    ArrayBetween(arr);
    NegativeProduct(arr);
}
int main() {
    int arr[10];
    int v;
    printf("\nChoose a method to get the result: ");
    printf("\n\t1.Enter your array;\n\t2.Exit.");
    printf("\n\tAnswer: ");
    scanf("%d", &v);
    if ( v == 1 ) {
        result(arr);
    }
    else {
        return 0;
    }
    return 0;
}