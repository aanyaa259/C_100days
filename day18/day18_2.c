#include <stdio.h>

int main() {
    int a, b, q, r;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;  

    printf("\nEuclidean steps to find HCF of %d and %d:\n", x, y);

while (b != 0) {
q = a / b;     // quotient
r = a % b;
printf("%d = %d * %d + %d\n", a, b, q, r);
a = b;
b = r;
}

    printf("\nHCF = %d\n", a);

return 0;
}

