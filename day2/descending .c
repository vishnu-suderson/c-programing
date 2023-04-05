#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, maxIndex, temp;
    for (i = 0; i < n-1; i++) {
        maxIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

int main() {
    int arr[] = {4, 2, 8, 5, 1, 9, 6, 3, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    selectionSort(arr, n);

    printf("\nArray sorted in descending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
