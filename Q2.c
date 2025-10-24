/*Construct a C program to find the HCF (Highest Common Factor) of two integers using
iterative or recursive logic — a core operation in optimisation algorithms and cryptographic
computations*/

#include <stdio.h>

int main() {
  int a, b, temp;
  
  printf("Enter number 1 and 2 in (x y) format: ");
  scanf("%d %d", &a, &b);
  
  while (b != 0) {
    temp = b;
    b = a%b;
    a = temp;
  }
  
  printf("HCF = %d\n", a);
  
  return 0;
}
