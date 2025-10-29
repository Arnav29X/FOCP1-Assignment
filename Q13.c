#include <stdio.h>

int main() {
    int a;
    printf("Enter how many elements you want to store: ");
    scanf("%d", &a);

    int arr[a];

    printf("Enter %d elements:\n", a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    int peak_count = 0;

    printf("Peak elements: ");
    for (int i = 0; i < a; i++) {
        int L = (i == 0) || (arr[i] >= arr[i - 1]);
        int R = (i == a - 1) || (arr[i] >= arr[i + 1]);

        if (L && R) {
            printf("%d ", arr[i]);
            peak_count++;
        }
    }

    printf("\nTotal peaks found: %d\n", peak_count);
    return 0;
}
