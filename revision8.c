#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, wordCount = 0;
    int inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            wordCount++;
        }
    }

    printf("Total number of words: %d\n", wordCount);
    return 0;
}
