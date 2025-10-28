#include <stdio.h>

int main(){
    int n, i = 0;

    printf("Enter how many elements you want in this array: ");
    scanf("%d", &n);

    int arr[n];

    for (i; i < n; i++) {
        printf("Enter element at index[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] == 99) break;
        else {
            return printf("Array does not contain 99!");
        }
    }

    printf("99's first occurence in this array is at index %d or position %d", i, i+1);

    return 0;
}
