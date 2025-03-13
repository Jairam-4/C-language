#include <stdio.h>

int main() {
    int a;
    
    printf("Enter the number of letters: ");
    scanf("%d", &a);
    
    char b[a + 1]; 
    int i = 0;
    char ch;
    
    printf("Enter %d characters one by one:\n", a);
    
    while (i < a) {
        printf("Enter a character: ");
        scanf(" %c", &ch);
        b[i] = ch;
        i++;
    }
    
    b[a] = '\0';
    printf("Collected string: %s\n", b);
}

 

