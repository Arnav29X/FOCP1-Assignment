#include <stdio.h>
#include <math.h>

int main() {
    int ch;

    printf("Choose conversion type:\n1. Binary to Decimal\n2. Decimal to Binary\n");
    printf("Enter your ch (1 or 2): ");
    scanf("%d", &ch);

    if (ch == 1) {
        int decimal = 0, i = 0, rem;
        long long binary;

        printf("Enter a binary number: ");
        scanf("%lld", &binary);

        while (binary != 0) {
            rem = binary % 10;
            decimal = decimal + rem * pow(2, i);
            binary /= 10;
            i++;
        }
        printf("Decimal value: %d\n", decimal);
    }

    else if (ch == 2) {
        int decimal, binary[32], i = 0;

        printf("Enter a decimal number: ");
        scanf("%d", &decimal);

        if (decimal == 0) {
            printf("Binary value: 0\n");
            return 0;
        }

        while (decimal > 0) {
            binary[i] = decimal % 2;
            decimal /= 2;
            i++;
        }

        printf("Binary value: ");
        for (int j = i - 1; j >= 0; j--)
            printf("%d", binary[j]);
        printf("\n");
    }

    else {
        printf("Invalid ch! Please run again.\n");
    }

    return 0;
}
