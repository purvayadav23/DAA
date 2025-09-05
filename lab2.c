#include <stdio.h>
int missingNumber(int arr[], int n) {
int total = n * (n + 1) / 2;
int sum = 0;
for (int i = 0; i < n; i++) {
sum += arr[i];
}
return total - sum;
}
int main() {
int n;
printf("Enter value of n: ");
scanf("%d", &n);
int arr[n];  // array size = n (since one number missing from 0..n)
printf("Enter %d elements from range 0 to %d (one missing):\n", n, n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("Missing number is: %d\n", missingNumber(arr, n));
return 0;
}
