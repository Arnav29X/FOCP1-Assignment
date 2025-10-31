#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Index[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nArray before deletion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    int mid = n / 2;

    for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;
    printf("\n\nAfter deleting front element: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    for (int i = mid - 1; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;
    printf("\nAfter deleting middle element: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    n--;
    printf("\nAfter deleting last element: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}
