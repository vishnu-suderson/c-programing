#include <stdio.h>
#include <string.h>

// Function to reverse a string using pointers
void reverse_string(char *str) {
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter any string :: ");
    scanf("%s", str);

    reverse_string(str);

    printf("The Reverse of the String [%s] is :: %s", str, str);

    return 0;
}
