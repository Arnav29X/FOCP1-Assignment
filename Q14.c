#include <stdio.h>

int main() {
    int isPrime, prime_count = 0, n, i, j;

    printf("How many elements you want to store in array? : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int num = arr[i];
        if (num <= 1)
            continue;

        isPrime = 1;
        for (j = 2; j <= num / 2; j++) {
            if (num % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            prime_count++;
    }

    printf("\n%d prime numbers found in this array.\n", prime_count);

    return 0;
}
