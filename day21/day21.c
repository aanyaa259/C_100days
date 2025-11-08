#include <stdio.h>

int main() {
    int n, num, firstDigit, lastDigit, power = 1, swappedNum;

    printf("Enter number: ");
    scanf("%d", &n);

    num = n;  // Store original number

    // Find last digit
    lastDigit = n % 10;

    // Find first digit and the place value (power of 10)
    while (n >= 10) {
        n = n / 10;
        power = power * 10;
    }
    firstDigit = n;

    // If single digit, no change
    if (power == 1 && firstDigit == lastDigit) {
        swappedNum = num;
    } else {
        // Remove first and last digits from the middle
        int middle = num % power;    // removes first digit
        middle = middle / 10;        // removes last digit

        // Construct swapped number
        swappedNum = lastDigit * power + middle * 10 + firstDigit;
    }

    printf("%d\n", swappedNum);
    return 0;
}
