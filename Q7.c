#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d", j % 2);
        }

        for (int s = (rows - i) * 2; s > 0; s--) {
            printf(" ");
        }

        for (int j = 0; j < i; j++) {
            printf("%d", j % 2);
        }

        printf("\n");
    }

    return 0;
}
