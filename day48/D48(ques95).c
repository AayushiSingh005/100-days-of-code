#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200];
    scanf("%s", str1);
    scanf("%s", str2);

    // If lengths differ → cannot be rotations
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation");
        return 0;
    }

    // Create a new string = str1 + str1
    char doubled[400];
    strcpy(doubled, str1);
    strcat(doubled, str1);

    // Check if str2 is a substring of doubled
    if (strstr(doubled, str2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
