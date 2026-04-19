#include <stdio.h>

int main()
{
  double x, sum = 0, term;
  int n, i, j;

  printf("Enter value of x (in radians): ");
  scanf("%lf", &x);
  printf("Enter number of terms: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    term = 1;
    for (j = 1; j <= 2 * i + 1; j++)
    {
      term *= x / j;
    }
    if (i % 2 == 0)
      sum += term;
    else
      sum -= term;
  }

  printf("Sum of sine series = %lf\n", sum);
  return 0;
}