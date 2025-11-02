/*Q4: Write a program to calculate the area and circumference of a circle given its radius.
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
int main () {
float area, circumfrence, radius;
printf("Enter radius of circle:");
scanf("%f", &radius);
area = 3.14 * radius * radius ;
circumfrence = 2 * 3.14 * radius;
printf("Area of circle is %.2f\n",area);
printf("Circumfrence of circle is %.2f\n",circumfrence);
return 0;
}
