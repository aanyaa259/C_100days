/* Q52  Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*




Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    int group_stars[] = {1, 3, 5, 3, 1};  // number of stars per group
    int i, j;

    for (i = 0; i < 5; i++) {             // loop over groups
        for (j = 0; j < group_stars[i]; j++) {
            printf("*\n");                 // print that many stars
        }
        printf("\n");                      // blank line between groups
    }

    return 0;
}
