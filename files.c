#include <stdio.h>

int main() {
    FILE *file1, *file2;
    
    // Creating & Writing to file1.txt
    file1 = fopen("file1.txt", "w");
    if (file1 == NULL) {
        printf("Error opening file1.txt!\n");
        return 1;
    }
    fprintf(file1, "Hello from file1!\n");
    fclose(file1);

    // Creating & Writing to file2.txt
    file2 = fopen("file2.txt", "w");
    if (file2 == NULL) {
        printf("Error opening file2.txt!\n");
        return 1;
    }
    fprintf(file2, "Hello from file2!\n");
    fclose(file2);

    // Reading from file1.txt
    file1 = fopen("file1.txt", "r");
    char line[100];
    if (file1 == NULL) {
        printf("Error opening file1.txt for reading!\n");
        return 1;
    }
    printf("Reading from file1.txt:\n");
    while (fgets(line, sizeof(line), file1)) {
        printf("%s", line);
    }
    fclose(file1);

    // Deleting content of file2.txt
    file2 = fopen("file2.txt", "w");  // Opening in "w" mode clears content
    if (file2 == NULL) {
        printf("Error opening file2.txt for deletion!\n");
        return 1;
    }
    fclose(file2);
    printf("\nContent of file2.txt deleted!\n");

    return 0;
}
