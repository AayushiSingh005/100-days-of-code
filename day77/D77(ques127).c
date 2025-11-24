#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(fin);
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper(ch), fout);
    }

    printf("File converted successfully! Check output.txt\n");

    fclose(fin);
    fclose(fout);

    return 0;
}
