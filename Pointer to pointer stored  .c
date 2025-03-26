#include <stdio.h>

int main() {
    int a = 10;
    int *p1 = &a;  // First pointer to 'a'
    int **p2 = &p1; // Pointer to pointer (stores address of 'p1')

    printf("Value of a: %d\n", a);
    printf("Value using *p1: %d\n", *p1);
    printf("Value using **p2: %d\n", **p2);
    
    printf("Address of a: %p\n", (void*)&a);
    printf("Address stored in p1: %p\n", (void*)p1);
    printf("Address stored in p2: %p\n", (void*)p2);

    return 0;
}
