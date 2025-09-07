#include <stdio.h>

int main() {
int original, num, rev = 0, rem;
printf("Enter a number: ");
scanf("%d", &num);
original = num;
while (num != 0) {
rem = num % 10;
rev = rev * 10 + rem;
num = num / 10;
}
if (original == rev) {
printf("It is a palindrome number");
}
else {
printf("It is not a palindrome number");
}
return 0;
}
