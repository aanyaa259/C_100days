#include <stdio.h>
int main() {
int n;
printf("enter number:");
scanf("%d", &n);
int a=0;
for (int i=2;i<=n-1;i++) {
if (n % i == 0) {
a = 1;
break;
}
}
if (a == 0)printf("number is prime\n");
else printf("it is a composite number\n");
return 0;
}
