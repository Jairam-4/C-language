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
                printf("\nSubtract 6 from your answer \n B");
                break;
            case 'A': 
                printf("\nChoose a number \n I");
                break;
            case 'a': 
                printf("\nDivide the answer by your original number \nM");
                break;
            case 'R': 
                printf("\nMultiply with 5\na");
                break;
            case 'B': 
                printf("\nYour answer is 4 🎉\nY");
                break;
            case 'I': 
                printf("\nMultiply with 2\nR");
                break;
            case 'Y': 
                printf("\nGame Over! Thanks for playing. 🎮\nE ");
                break;  
            case 'E': 
                printf("\nTo continue, input \n J");
                break;
            case 'J': 
                printf("\nTake a pen & paper for calculations\nA");
                break;
            default:
                printf("\nYou lost the game! Try again \nJ");
                break;
        }
    }
}
