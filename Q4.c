/*Implement a C program to swap two numbers using four different methods, demonstrating
diverse approaches such as arithmetic, bitwise XOR, pointer manipulation, and temporary variable
usage — a key skill in memory and variable management.*/

#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before: a = %d, b = %d\n\n", a, b);
    
    // Method 1: Temporary variable
    int x = a, y = b;
    int temp = x;
    x = y;
    y = temp;
    printf("1. Temp variable: a = %d, b = %d\n", x, y);
    
    // Method 2: Arithmetic
    x = a, y = b;
    x = x + y;
    y = x - y;
    x = x - y;
    printf("2. Arithmetic: a = %d, b = %d\n", x, y);
    
    // Method 3: Bitwise XOR
    x = a, y = b;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("3. Bitwise XOR: a = %d, b = %d\n", x, y);
    
    return 0;
}
