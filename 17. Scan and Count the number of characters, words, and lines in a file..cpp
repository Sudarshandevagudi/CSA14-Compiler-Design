#include <stdio.h>
#include <ctype.h>

int main() {
    int characterCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;
    char c;

    printf("Enter text (Ctrl+D to end input):\n");

    while ((c = getchar()) != EOF) {
        characterCount++;

        if (c == '\n') {
            lineCount++;
            inWord = 0; // Reset inWord flag when a new line is encountered
        }

        if (isspace(c)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            wordCount++;
        }
    }

    // Check if the last word is not followed by a space or newline
    if (inWord == 1) {
        wordCount++;
    }

    printf("Number of characters: %d\n", characterCount);
    printf("Number of words: %d\n", wordCount);
    printf("Number of lines: %d\n", lineCount);

    return 0;
}
