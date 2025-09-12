#include <stdio.h>
int main() {
    int m, n, p, q;
    printf("Enter rows and columns of first matrix: ");
    if (scanf("%d %d", &m, &n) != 2 || m <= 0 || n <= 0) {
        printf("Invalid input for first matrix dimensions.\n");
        return 1;
    }
    printf("Enter rows and columns of second matrix: ");
    if (scanf("%d %d", &p, &q) != 2 || p <= 0 || q <= 0) {
        printf("Invalid input for second matrix dimensions.\n");
        return 1;
    }
    if (n != p) {
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second matrix.\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    // Input first matrix
    printf("Enter elements of first matrix (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    // Input second matrix
    printf("Enter elements of second matrix (%d x %d):\n", p, q);
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    // Multiply matrices
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // Print result
    printf("Resultant matrix (%d x %d):\n", m, q);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    // Print operation counts
    int totalMultiplications = m * n * q;// every element in result matrix requires n multiplications.
    int totalAdditions = m * q * (n - 1);//each dot product involves n - 1 additions.
    printf("Total number of multiplications: %d\n", totalMultiplications);
    printf("Total number of additions: %d\n", totalAdditions);
    return 0;
}
