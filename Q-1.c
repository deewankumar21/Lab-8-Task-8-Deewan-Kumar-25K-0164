#include <stdio.h>

int main() {
    int scores[3][4] = {
        {85, 92, 78, 90},
        {88, 76, 95, 84},
        {90, 85, 88, 92}
    };
    int i,j;
    for (i = 0; i < 3; i++) {
        int sum = 0;
        for (j = 0; j < 4; j++) {
            sum += scores[i][j];
        }
        printf("Average of Class %d = %.2f\n", i + 1, sum / 4.0);
    }

    return 0;
}

