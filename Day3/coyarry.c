#include <stdio.h>

int main() {
    int arr1[10], arr2[10], *p1, *p2;
    int i;

    // Taking input in arr1
    printf("Input array1 elements: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr1[i]);

    // Copying elements of arr1 to arr2 using pointers
    p1 = arr1;
    p2 = arr2;
    for (i = 0; i < 10; i++) {
        *p2 = *p1;
        p1++;
        p2++;
    }

    // Printing both arrays
    printf("Array1: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr1[i]);

    printf("\nArray2: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr2[i]);

    return 0;
}
