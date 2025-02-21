// Largest num in array in c

#include <stdio.h>
int main() 
{
    int n;
     printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int l = a[0]; 
    for(int i = 1; i < n; i++) {
        
        if(a[i] > l)
        {
            l = a[i];  
       }
    }
    printf("%d is the largest number in the array.\n", l);
    return 0;
}

