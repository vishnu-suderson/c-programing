#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 5, 5, 6, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                for(int k = j; k < n; k++)
                {
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
