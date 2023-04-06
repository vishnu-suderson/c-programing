#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Function to print all permutations of a string
void permute(char *str, int left, int right) {
    // If we have reached the end of the string
    if (left == right) {
        printf("%s\n", str);
    } else {
        // Permute the string from left to right
        for (int i = left; i <= right; i++) {
            swap(str+left, str+i);
            permute(str, left+1, right);
            swap(str+left, str+i);
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("All possible permutations are:\n");
    permute(str, 0, strlen(str)-1);

    return 0;
}
