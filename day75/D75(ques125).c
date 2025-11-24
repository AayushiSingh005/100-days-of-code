#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50], text[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    getchar(); // clear newline from buffer

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
