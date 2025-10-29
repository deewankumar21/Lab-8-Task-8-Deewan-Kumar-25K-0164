#include <stdio.h>

int main() {
    int i, j, space;

  

    for (i = 1; i <= 5; i++) {
        // Right-aligned stars
        for (space = 5; space > i; space--)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf(" | ");

        // Right-aligned numbers
        for (space = 5; space > i; space--)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf(" | ");

        // Right-aligned alphabets
        for (space = 5; space > i; space--)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("%c ", 'A' + j - 1);

        printf("\n");
    }

  
    return 0;
}

