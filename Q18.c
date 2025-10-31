#include <stdio.h>

int main() {
    int n;
    printf("Enter how many elements you want to store: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input.\n");
        return 0;
    }

    printf("Enter elements:\n");
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int found = 0;
    printf("Duplicate elements: ");

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("-1");

    printf("\n");
    return 0;
}
