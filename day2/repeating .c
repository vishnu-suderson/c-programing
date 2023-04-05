#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 2, 3, 2, 1, 4};
    int num, count = 0;
    
    printf("Enter a number to search for in the array: ");
    scanf("%d", &num);
    
    for (int i = 0; i < 10; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    
    printf("The number %d appears %d times in the array.", num, count);
    
    return 0;
}
