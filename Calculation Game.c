#include <stdio.h>

int main() {
    char a;
    
    printf("Before playing the game, follow these steps:\n");
    printf("1. Input is given in brackets (e.g., 'J'), provide the same as input.\n");
    printf("2. Start the game with input:\nJ");

    while (1) {
        printf("\nEnter your input: ");
        scanf(" %c", &a); 

        switch (a) {
            case 'M': 
                printf("\nSubtract 6 from your answer \n (B)");
                break;
            
            case 'A': 
                printf("\nChoose a number between 1-10\n (I)");
                break;

            case 'a': 
                printf("\nDivide the answer by your original number \n(M)");
                break;

            case 'R': 
                printf("\nMultiply with 5\n (a)");
                break;

            case 'B': 
                printf("\nYour answer is 4 🎉\n (Y)");
                break;

            case 'I': 
                printf("\nMultiply with 2\n (R)");
                break;

            case 'Y': 
                printf("\nGame Over! Thanks for playing. 🎮 \n(E)");
                return 0;  
            case 'E': 
                printf("\nTo continue, input \n(J)");
                break;

            case 'J': 
                printf("\nTake a pen & paper for calculations\n (A)");
                break;

            default:
                printf("\nYou lost the game! Try again \n(J)");
                break;
        }
    }
}
