#include <stdio.h>


void insertValue(int arr[], int size, int value)
{
    int i = size - 1;
    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = value;

}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size], i;

    printf("Enter the sorted elements of the array: ");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int value;
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    insertValue(arr, size, value);

    printf("Array after inserting the value: ");

    for (i = 0; i <= size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
