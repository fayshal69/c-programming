#include <stdio.h>

void printReverse(int *arr, int size) {
	int *start = arr;
	int *end = arr + size -1;
	int temp;
	while(start < end) {
		temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
		
	}
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printReverse(arr, size);

    printf("Reversed array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
