#include <stdio.h>
#include <stdbool.h>
bool isPowerOfTwo(int n) {
if (n <= 0) return false;
while (n % 2 == 0) {
n = n / 2;
}
return n == 1;
}
int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);
if (isPowerOfTwo(n))
printf("%d is a power of two.\n", n);
else
printf("%d is NOT a power of two.\n", n);
return 0;
}
