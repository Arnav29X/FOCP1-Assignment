#include <stdio.h>

int main() {
    int n, i, found = 0;

    printf("Enter how many elements you want in this array: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter element at index[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("99's first occurrence is at index %d or position %d\n", i, i + 1);
    else
        printf("Array does not contain 99!\n");

    return 0;
}
