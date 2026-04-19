#include <stdio.h>

/* Recursive Function */
long long int fact_recursive(int n)
{
  if (n == 0 || n == 1)
    return 1;
  else
    return n * fact_recursive(n - 1);
}

/* Iterative Function */
long long int fact_iterative(int n)
{
  long long int fact = 1;
  int i;
  for (i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

int main()
{
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (n < 0)
  {
    printf("Factorial is not defined for negative numbers\n");
    return 0;
  }

  printf("Factorial using iteration = %lld\n", fact_iterative(n));
  printf("Factorial using recursion = %lld\n", fact_recursive(n));

  return 0;
}