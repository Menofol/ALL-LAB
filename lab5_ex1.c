#include <limits.h> // For INT_MIN
#include <stdio.h>

// Function to print three largest elements
void white () {
  printf("\033[0;37m");
}
void print3largest(int arr[], int arr_size)
{
	int i, first, second, third;

	// There should be atleast three elements
	if (arr_size < 3) {
		printf(" Invalid Input ");
		return;
	}

	third = first = second = INT_MIN;
	for (i = 0; i < arr_size; i++) {
		if (arr[i] > first) {
			third = second;
			second = first;
			first = arr[i];
		}

		else if (arr[i] > second) {
			third = second;
			second = arr[i];
		}

		else if (arr[i] > third)
			third = arr[i];
	}

    printf("\tMax number of array: \033[0;32m%d, %d, %d\n", first, second, third);
    white();
}
void print2Smallest(int arr[], int arr_size)
{
    int i, first, second;
 
    // There should be atleast two elements
    if (arr_size < 2)
    {
        printf(" Invalid Input ");
        return;
    }
 
    first = second = INT_MAX;
    for (i = 0; i < arr_size ; i ++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
 
        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MAX)
        printf("\tThere is no second smallest element\n");
    else
        printf("\tMin number of array: \033[0;32m%d, %d\n", first, second);
        white();
}

int main(void)
{
    int arr[10]; // declaring an integer array a with 10 elements
    int i; // variable for working with an array in a loop
    int max = sizeof(arr) / sizeof(arr[0]);
    int min = sizeof(arr) / sizeof(arr[0]);
    for (i=0; i<10; i++)
    {
    printf("a[%d] = ", i);
    scanf("%d", &arr[i]);
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
	print3largest(arr, max);
    puts("______________________________________________________________\n");
    print2Smallest(arr, min);
    puts("______________________________________________________________\n");
	return 0;
}