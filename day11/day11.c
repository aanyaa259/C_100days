/* Q21: Write a program to display the month name and number of days using switch-case for a given month number.

Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include <stdio.h>

int main() {
    int month;

    printf("Enter a number (1-12): ");
    scanf("%d", &month);

    switch (month) {
case 1:
            printf("January\n");
            break;
case 2:
            printf("February\n");
            break;
case 3:
            printf("March\n");
            break;
case 4:
	    printf("April\n");
            break;
case 5:
            printf("May\n");
            break;
case 6:
            printf("June\n");
            break;
case 7:
            printf("July\n");
            break;
case 8:
            printf("August\n");
            break;
case 9:
            printf("September\n");
            break;
case 10:
            printf("October\n");
            break;
case 11:
            printf("November\n");
            break;
case 12:
            printf("December\n");
            break;
default:
printf("Invalid INput\n");
}
return 0;
}
