#include <stdio.h>

int main()
{
  float basicpay, hra, ta, grosssalary, pt, netsalary;
  printf("Enter Basic Pay: ");
  scanf("%f", &basicpay);

  hra = 0.1 * basicpay;
  ta = 0.05 * basicpay;
  grosssalary = basicpay + hra + ta;
  pt = 0.02 * grosssalary;
  netsalary = grosssalary - pt;
  printf("Gross Salary: %.2f\n", grosssalary);
  printf("Net Salary: %.2f\n", netsalary);
  return 0;
}