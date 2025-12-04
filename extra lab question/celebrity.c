#include <stdio.h>
int main() {
int n;
printf("Enter number of people: ");
scanf("%d", &n);
int M[n][n];
printf("Enter the acquaintance matrix (0 or 1):\n");
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
scanf("%d", &M[i][j]);
}
}
int a = 0;
int b = n - 1;
while (a < b) {
if (M[a][b] == 1)
a++;
else
b--;
}
int celeb = a;
for (int i = 0; i < n; i++) {
if (i != celeb) {
if (M[celeb][i] == 1 || M[i][celeb] == 0) {
printf("There is no celebrity in the party.\n");
return 0;
}
}
}
printf("Celebrity is person %d\n", celeb);
return 0;
}
