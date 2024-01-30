#include <stdio.h>

// Function prototype for binary search
int *binarySearch(int *arr, int size, int target);

int main()
{
    int size;
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int arr[size];

    printf("\nEnter the sorted elements of the array: ");
    // Input elements into the array
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("\nEnter the value to search: ");
    scanf("%d", &target);

    // Call binarySearch function and store the result
    int *result = binarySearch(arr, size, target);

    // Check if target value was found
    if (result != NULL)
    {
        // Print the index where the target value was found
        printf("\nTarget value found at index %ld.\n\n", result - arr);
    }
    else
    {
        // Print a message if the target value was not found
        printf("\nTarget value not found in the array.\n\n");
    }

    return 0;
}

// Binary search function
int *binarySearch(int *arr, int size, int target)
{
    // Initialize pointers for the left and right boundaries of the search
    int *left = arr;
    int *right = arr + size - 1;

    // Continue the search until the left boundary is greater than the right boundary
    while (left <= right)
    {
        // Calculate the middle index
        int *mid = left + (right - left) / 2;

        // Check if the target value is equal to the value at the middle index
        if (*mid == target)
        {
            // Return the pointer to the middle index if target is found
            return mid;
        }

        // If the target is greater, update the left boundary
        if (*mid < target)
        {
            left = mid + 1;
        }
        else
        {
            // If the target is smaller, update the right boundary
            right = mid - 1;
        }
    }

    // Return NULL if the target value is not found in the array
    return NULL;
}