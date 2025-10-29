#include <stdio.h>

int main() {
    int seats[3][3] = {
        {1, 0, 1},
        {0, 0, 1},
        {1, 1, 0}
    };
    int available = 0;
    int row,col;

    printf("Available Seats:\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            if (seats[row][col] == 0) {
                printf("Row %d, Seat %d\n", row + 1, col + 1);
                available++;
            }
        }
    }

    printf("\nTotal available seats: %d\n", available);
    return 0;
}

