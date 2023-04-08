#include <stdio.h>

union data {
    int i;
    float f;
};

int main() {
    union data myData;
    char choice;
    
    printf("Enter a value (i for integer, f for float): ");
    scanf("%c", &choice);

    if (choice == 'i') {
        printf("Enter an integer value: ");
        scanf("%d", &myData.i);
        printf("You entered: %d\n", myData.i);
    } else if (choice == 'f') {
        printf("Enter a float value: ");
        scanf("%f", &myData.f);
        printf("You entered: %f\n", myData.f);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
