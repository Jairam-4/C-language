#include <stdio.h>

int main() {
    int a, b, c = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    while (a != 0) {
        b = a % 10;
        c += b;
        a = a / 10;
    }
    printf("Sum of digits: %d\n", c);
    return 0;
}
