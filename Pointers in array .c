#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer to first element of array

    printf("First element: %d\n", *ptr);  // Access first element
    ptr++;  // Move pointer to next element
    printf("Second element: %d\n", *ptr);

    ptr += 2;  // Move pointer 2 positions ahead
    printf("Fourth element: %d\n", *ptr);

    return 0;
}
