#include <stdio.h>
int main() {
    int a, b = 0;
    scanf("%d", &a);
    for (int i = 2; i <= a / 2; i++) 
    {
        if (a % i == 0) 
        {
            b += 1;
            break;
        }
    }
    if (b == 0 && a > 1) 
    {
        printf("Prime num");
    } 
    else 
    {
        printf("Not a Prime num");
    }
    return 0;
}
