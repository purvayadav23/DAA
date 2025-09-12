#include <stdio.h>

int main() {
    int m, n, p, q;

    printf("Enter rows and columns of first matrix : ");
    if (scanf("%d %d", &m, &n) != 2 || m <= 0 || n <= 0) {
        printf("Invalid input for first matrix dimensions.\n");
        return 1;
    }

    printf("Enter rows and columns of second matrix : ");
    if (scanf("%d %d", &p, &q) != 2 || p <= 0 || q <= 0) {
        printf("Invalid input for second matrix dimensions.\n");
        return 1;
    }

    if (n != p) {
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second matrix.\n");
        return 0;
    }

    int totalMultiplications = m * n * q;
    int totalAdditions = m * q * (n - 1);

    printf("✅ Matrix multiplication is possible.\n");
    printf("Total number of multiplications: %d\n", totalMultiplications);
    printf("Total number of additions: %d\n", totalAdditions);

    return 0;
}
