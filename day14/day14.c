/*Q27: Write a program to print the sum of the first n odd numbers.


Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main() {
    int n;
    int product = 1; 

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i += 2) { 
        product *= i;               
    }

    printf("Product of even numbers from 1 to %d is: %d\n", n, product);
    return 0;
}
