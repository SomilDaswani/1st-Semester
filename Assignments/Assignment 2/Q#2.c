#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int i = 1, sum = 0;

  while (i <= 10) {
    sum += i;
    ++i;
  }

  printf("Sum of first 10 natural numbers: %d", sum);

  return 0;
}
