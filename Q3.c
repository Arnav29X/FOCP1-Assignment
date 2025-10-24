#include <stdio.h>

int main() {
    int a, b;
  
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
  
    int result = a + (~b + 1);
    printf("%d - %d = %d\n", a, b, result);
  
    return 0;
}
