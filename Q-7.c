#include <stdio.h>

int main() {
    int i, j, space;

    printf("Question #7\n\n");

    for (i = 1; i <= 5; i++) {
        // ---- STAR PYRAMID ----
        for (space = 5; space > i; space--)
            printf("  ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("* ");
        for (space = 5; space > i; space--)
            printf("  ");

        // separator between star and numbers
        printf("|");

        // ---- NUMBER PYRAMID ----
        for (space = 5; space > i; space--)
            printf("  ");
        printf("  "); // space after |
        for (j = 1; j <= (2 * i - 1); j++)
            printf("%d ", j);
        for (space = 5; space > i; space--)
            printf("  ");

        // separator between numbers and alphabets
        printf("|");

        // ---- ALPHABET PYRAMID ----
        for (space = 5; space > i; space--)
            printf("  ");
        printf("  "); // space after |
        // print alphabets, last row ends at H (not I)
        int limit = (2 * i - 1);
        if (limit > 8) limit = 8;  // stop at H
        for (j = 1; j <= limit; j++)
            printf("%c ", 'A' + j - 1);
        for (space = 5; space > i; space--)
            printf("  ");

        printf("\n");
    }

    return 0;
}

