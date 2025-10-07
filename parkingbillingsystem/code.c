#include <stdio.h>

int main(void)
{
    char vh[64];
    int thrs, tmin, texithrs, texitmin;

    printf("Enter Vehicle Number: ");
    if (scanf("%63s", vh) != 1) {
        fprintf(stderr, "Invalid vehicle number\n");
        return 1;
    }

    printf("Enter Entry Time (HH MM): ");
    if (scanf("%d %d", &thrs, &tmin) != 2) {
        fprintf(stderr, "Invalid entry time\n");
        return 1;
    }

    printf("Enter Exit Time (HH MM): ");
    if (scanf("%d %d", &texithrs, &texitmin) != 2) {
        fprintf(stderr, "Invalid exit time\n");
        return 1;
    }

    // Normalize times and validate ranges
    if (thrs < 0 || thrs > 23 || texithrs < 0 || texithrs > 23 || tmin < 0 || tmin > 59 || texitmin < 0 || texitmin > 59) {
        fprintf(stderr, "Time values out of range\n");
        return 1;
    }

    // Convert entry and exit to minutes
    int entry_minutes = thrs * 60 + tmin;
    int exit_minutes = texithrs * 60 + texitmin;

    int total_minutes = exit_minutes - entry_minutes;

    if (total_minutes < 0) {
        printf("Error: Exit time cannot be earlier than entry time!\n");
        return 1;
    }

    // Round up to next hour if there are extra minutes
    int time_sum = total_minutes / 60;
    if (total_minutes % 60 != 0) {
        time_sum++;
    }

    double bill;
    if (time_sum <= 2) {
        bill = time_sum * 5.0; // $5 per hour for first 2 hours
    } else {
        bill = (2 * 5.0) + (time_sum - 2) * 3.0; // extra hours $3 each
    }

    printf("\n----- Parking Bill -----\n");
    printf("Vehicle Number: %s\n", vh);
    printf("Total Time Parked: %d hours\n", time_sum);
    printf("Total Bill: $%.2f\n", bill);

    return 0;
}