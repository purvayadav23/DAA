#include <stdio.h>
#define N 3  // You can change this to any fixed size
void rotate90Clockwise(int matrix[N][N]) {
// Transpose
for (int i = 0; i < N; ++i) {
for (int j = i + 1; j < N; ++j) {
int temp = matrix[i][j];
matrix[i][j] = matrix[j][i];
matrix[j][i] = temp;
}
}
// Reverse each row
for (int i = 0; i < N; ++i) {
for (int j = 0; j < N / 2; ++j) {
int temp = matrix[i][j];
matrix[i][j] = matrix[i][N - 1 - j];
matrix[i][N - 1 - j] = temp;
}
}
}
void printMatrix(int matrix[N][N]) {
for (int i = 0; i < N; ++i) {
for (int j = 0; j < N; ++j) {
printf("%d ", matrix[i][j]);
}
printf("\n");
}
}

int main() {
int matrix[N][N];
// Input from user
printf("Enter elements of %d x %d matrix:\n", N, N);
for (int i = 0; i < N; ++i) {
for (int j = 0; j < N; ++j) {
scanf("%d", &matrix[i][j]);
}
}
printf("\nOriginal Matrix:\n");
printMatrix(matrix);
rotate90Clockwise(matrix);
printf("\nRotated Matrix:\n");
printMatrix(matrix);
return 0;
}
