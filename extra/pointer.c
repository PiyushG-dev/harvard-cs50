#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Example array
    int length = sizeof(arr) / sizeof(arr[0]);  // Calculate the length of the array
    int sum = 0;
    int *ptr = arr;  // Pointer to the first element of the array

    // Traverse the array using pointer arithmetic
    for (int i = 0; i < length; i++) {
        sum += *(ptr + i);  // Access the value at the current pointer position
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
