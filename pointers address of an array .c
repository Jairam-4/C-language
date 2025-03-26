#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer to first element of array

    printf("First element: %d\n", *ptr);  // Access first element
    ptr += 1;  // Move pointer to next element
    printf("Second element: %d\n", *ptr);

    ptr += 2;  // Move pointer 2 positions ahead
    printf("Fourth element: %d\n", *ptr);

    printf("Address of first element: %p\n", (void*)&arr[0]);
    printf("Current pointer address: %p\n", (void*)ptr);
    printf("Pointer address after ptr+=1: %p\n", (void*)(ptr + 1));
    printf("Pointer address after ptr+=2: %p\n", (void*)(ptr + 2));

    return 0;
}
