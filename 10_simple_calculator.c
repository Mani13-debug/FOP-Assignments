#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int factorial(int n);
float power(float x, int y);

int main()
{
  int choice;
  float a, b;
  int n, y;

  printf("===== Simple Calculator =====\n");
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  printf("5. Power (x^y)\n");
  printf("6. Factorial (x!)\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch (choice)
  {

  case 1:
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result = %.2f\n", add(a, b));
    break;

  case 2:
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result = %.2f\n", subtract(a, b));
    break;

  case 3:
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Result = %.2f\n", multiply(a, b));
    break;

  case 4:
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    if (b != 0)
      printf("Result = %.2f\n", divide(a, b));
    else
      printf("Error! Division by zero.\n");
    break;

  case 5:
    printf("Enter base (x) and exponent (y): ");
    scanf("%f %d", &a, &y);
    printf("Result = %.2f\n", power(a, y));
    break;

  case 6:
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n >= 0)
      printf("Result = %d\n", factorial(n));
    else
      printf("Factorial not defined for negative numbers.\n");
    break;

  default:
    printf("Invalid choice!\n");
  }

  return 0;
}

/* Function Definitions */

float add(float a, float b)
{
  return a + b;
}

float subtract(float a, float b)
{
  return a - b;
}

float multiply(float a, float b)
{
  return a * b;
}

float divide(float a, float b)
{
  return a / b;
}

int factorial(int n)
{
  int fact = 1, i;
  for (i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

float power(float x, int y)
{
  float result = 1;
  int i;
  for (i = 1; i <= y; i++)
  {
    result *= x;
  }
  return result;
}
