#include <stdio.h>#include <stdio.h>
v
int main() {
    char date[20];
    scanf("%s", date);   // format: dd/04/yyyy

    char day[3], month[3], year[5];

    // Extract parts
    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';

    month[0] = date[3];
    month[1] = date[4];
    month[2] = '\0';

    year[0] = date[6];
    year[1] = date[7];
    year[2] = date[8];
    year[3] = date[9];
    year[4] = '\0';

    // Convert only "04" to "Apr"
    if (month[0] == '0' && month[1] == '4')
        printf("%s-Apr-%s", day, year);
    else
        printf("Invalid month");

    return 0;
}


int main() {
    char date[20];
    scanf("%s", date);   // format: dd/04/yyyy

    char day[3], month[3], year[5];

    // Extract parts
    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';

    month[0] = date[3];
    month[1] = date[4];
    month[2] = '\0';

    year[0] = date[6];
    year[1] = date[7];
    year[2] = date[8];
    year[3] = date[9];
    year[4] = '\0';

    // Convert only "04" to "Apr"
    if (month[0] == '0' && month[1] == '4')
        printf("%s-Apr-%s", day, year);
    else
        printf("Invalid month");

    return 0;
}
