#include <stdio.h>

int main()
{
    int arr[10];
    int i=0; 
    printf("Please input 8 numbers: ");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j=i;
    for (i = 7; i > 0; i--)
    {
        for ( j = 7; j > 7-i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }

    printf("After sorting: ");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

