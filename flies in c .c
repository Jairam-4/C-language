#include <stdio.h>

int main() {
    FILE *fp;

    // Writing to a file
    fp = fopen("data.txt", "w");
    fprintf(fp, "Jai is learning C programming!\n");
    fclose(fp);

    // Reading from the file
    fp = fopen("data.txt", "r");
    char str[100];
    fgets(str, 100, fp);
    printf("File Content: %s", str);
    fclose(fp);

    return 0;
}
