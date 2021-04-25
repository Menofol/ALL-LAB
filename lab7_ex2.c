#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
void white () {
  printf("\033[0;37m");
}

int MaxNumberModulElement ( int arr[10]) {
    int m, i, j, f;
    for (j=0; j < i; j++)
            if (abs(arr[j]) == abs(m)) {
                f = 0;
                break;
            }
        if (f == 1) {
            arr[i] = m;
            i += 1;
        }
    j = 0;
    for (i=0; i < 10; i++) {
        if (abs(arr[i]) > abs(arr[j])) 
            j = i;
    }
    
    printf("\nElement module is equal: \033[0;32m%d", arr[j]);
    white();
    printf("\nIndex of element: \033[0;32m%d", j);
    white();

}
void ArrayBetween(int arr[10]) {
    printf("{");
    for (int i=0; i<10; i++) {
        if (i == 9) {
        printf("\033[0;32m%d", arr[i]);
        white();
        }
        else {
        printf("\033[0;32m%d, ", arr[i]);
        white();
        }
    }
    printf("}");
}
void random(int arr[10]) {
        const int Low = 1;
        const int High = 100;
        srand(time(0));
        for (int i=0; i<10; i++) {
            arr[i] = Low/2 + rand()%High;
        }
        printf("\n\t\tResult: ");
        printf("\nYour array: ");
}
void enter(int arr[10]) {
        for (int i=0; i<10; i++) {
            printf("a[%d] = ", i);
            scanf("%d", &arr[i]);
        }
        printf("\n\t\tResult: ");
        printf("\nYour array: ");
}
int MaxandNullePositiveEnd ( int arr[10] ) {
    int iFirst, iLast;
    iFirst = iLast = -1;

    for(int i = 0;  i<10; i++)
    if (arr[i]>0) {
        iFirst = i;
        break;
    }
    for(int i = 10-1;  i> iFirst; i--)
    if (arr[i]>0) {
        iLast = i;
        break;
    }
    if (iFirst <0 || iLast < 0) printf ("Error\n");
    else {
    int product = 1;
    for(int i=iFirst +1; i < iLast; i++)
        product *= arr[i];
    printf("\nProduct elements for first and last positive: \033[0;32m%d", product);
    white();
}
 
}
// Driver's code
int main()
{
    int v;
    printf("\nChoose a method to get the result: ");
    printf("\n\t1: Between [-100/100];\n\t2: Enter your array;\n\t3: Exit.");
    printf("\n\tAnswer: ");
    scanf("%d", &v);
    if ( v == 1) {
        int arr[10];
        random(arr);
        ArrayBetween(arr);
        MaxNumberModulElement(arr);
        MaxandNullePositiveEnd(arr);
    }
    else if ( v == 2 ) {
        int arr[10];
        enter(arr);
        ArrayBetween(arr);
        MaxNumberModulElement(arr);
        MaxandNullePositiveEnd(arr);
    }
    else {
        return 0;
    }
    return 0;
}