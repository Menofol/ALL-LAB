#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
// function to find the sum of given series
double sum(int n)
{
    // base case
    if (n == 0)
        return 1;
 
    // calculate the sum each time
    double ans = 1 / (double)pow(3, n) + sum(n - 1);
 
    // return final answer
    return ans;
}
 
// Driver code
int main()
{
    // integer initialisation
    float n;
    
    printf("Write me n: ");
    scanf("%f", &n);
    printf("%f", sum(n));
    
    return 0;
}