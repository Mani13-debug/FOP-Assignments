/* ===================== Assignment 11 ===================== */
/* Menu Driven Mathematical Operations */

#include <stdio.h>
#include <math.h>

/* Function to check prime */
int isPrime(int n)
{
  int i;
  if (n <= 1)
    return 0;
  for (i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

/* Function to find factorial */
long long factorial(int n)
{
  long long fact = 1;
  int i;
  for (i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

int main()
{
  int num, choice, i;

  printf("Enter a number: ");
  scanf("%d", &num);

  printf("\nMENU:\n");
  printf("1. Square Root\n");
  printf("2. Square\n");
  printf("3. Cube\n");
  printf("4. Check Prime\n");
  printf("5. Factorial\n");
  printf("6. Prime Factors\n");

  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    if (num < 0)
      printf("Square root not defined for negative numbers\n");
    else
      printf("Square Root = %.2f\n", sqrt(num));
    break;

  case 2:
    printf("Square = %d\n", num * num);
    break;

  case 3:
    printf("Cube = %d\n", num * num * num);
    break;

  case 4:
    if (isPrime(num))
      printf("%d is a Prime number\n", num);
    else
      printf("%d is not a Prime number\n", num);
    break;

  case 5:
    if (num < 0)
      printf("Factorial not defined for negative numbers\n");
    else
      printf("Factorial = %lld\n", factorial(num));
    break;

  case 6:
    if (num <= 1)
    {
      printf("No prime factors\n");
    }
    else
    {
      printf("Prime factors: ");
      for (i = 2; i <= num; i++)
      {
        while (num % i == 0)
        {
          printf("%d ", i);
          num /= i;
        }
      }
    }
    break;

  default:
    printf("Invalid choice\n");
  }

  return 0;
}