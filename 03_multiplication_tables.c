#include <stdio.h>

int main()
{

  int i, j;
  int num1, num2;

  printf("Enter First Number: ");
  scanf("%d", &num1);

  printf("Enter the Number till which you want the Table for: ");
  scanf("%d", &num2);

  for (i = 1; i <= 10; i++)
  {
    for (j = num1; j <= num2; j++)
    {
      printf("%d x %d = %d\t", j, i, j * i);
    }
    printf("\n");
  }

  return 0;
}