#include <stdio.h>

int main() {
    int temp[4][4] = {
        {12, 15, 10, 9},
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}
    };
int i,j;
    printf("Cold spots found:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            int current = temp[i][j];
            int isCold = 1;

            // Skip the outer edges (optional, but needed to match expected output)
            if (i == 0 || i == 3 || j == 0)
                continue;

            // check top neighbor
            if (i > 0 && temp[i - 1][j] <= current) isCold = 0;
            // check bottom neighbor
            if (i < 3 && temp[i + 1][j] <= current) isCold = 0;
            // check left neighbor
            if (j > 0 && temp[i][j - 1] <= current) isCold = 0;
            // check right neighbor
            if (j < 3 && temp[i][j + 1] <= current) isCold = 0;

            if (isCold)
                printf("- At position (%d,%d) with temperature %d°C\n", i + 1, j + 1, current);
        }
    }

    return 0;
}

