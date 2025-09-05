#include <stdio.h>

// Function to swap using a third variable
void swapWithTemp(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping (using third variable): a = %d, b = %d\n", a, b);
}

// Function to swap using pointers
void swapWithPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping (using pointers): a = %d, b = %d\n", *a, *b);
}

int main() {
    int a, b, choice;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("Choose swapping method:\n");
    printf("1. Using third variable\n");
    printf("2. Using pointers\n");
    scanf("%d", &choice);

    if(choice == 1) {
        swapWithTemp(a, b);
    } else if(choice == 2) {
        swapWithPointers(&a, &b);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}

