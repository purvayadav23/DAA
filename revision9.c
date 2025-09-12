#include <stdio.h>

int main() {
    int arr[100], size;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements left to overwrite duplicate
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;  // Reduce array size
                j--;     // Stay at same index to check new value
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
