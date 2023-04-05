#include <stdio.h>

int main()
{
    int arr[50], even[50], odd[50];
    int i, j = 0, k = 0, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        else
        {
            odd[k] = arr[i];
            k++;
        }
    }

    printf("\nEven elements: ");
    for(i=0; i<j; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd elements: ");
    for(i=0; i<k; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}
