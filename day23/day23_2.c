/* Q46 Write a program to print the following pattern:
*****
*****
*****
*****
*****

Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include <stdio.h>

int main() {
    int n, i;
    float sum = 1.0; // first term = 1

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        float numerator = 2 * i - 1;
        float denominator = 2 * i;
        sum += numerator / denominator;
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
