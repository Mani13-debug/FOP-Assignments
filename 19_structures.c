#include <stdio.h>
#include <string.h>

struct EMPLOYEE
{
  char name[50], designation[50], gender[10], doj[20];
  float salary;
};

int main()
{
  struct EMPLOYEE e[100];
  int n, i, male = 0, female = 0;

  printf("Enter number of employees: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("Employee %d:\n", i + 1);
    scanf("%s %s %s %s %f", e[i].name, e[i].designation, e[i].gender, e[i].doj, &e[i].salary);

    if (strcmp(e[i].gender, "Male") == 0)
      male++;
    else if (strcmp(e[i].gender, "Female") == 0)
      female++;
  }

  printf("Total number of employees = %d\n", n);
  printf("Male employees = %d\n", male);
  printf("Female employees = %d\n", female);

  printf("Employees with salary more than 10000:\n");
  for (i = 0; i < n; i++)
  {
    if (e[i].salary > 10000)
      printf("%s\n", e[i].name);
  }

  printf("Employees with designation AsstManager:\n");
  for (i = 0; i < n; i++)
  {
    if (strcmp(e[i].designation, "AsstManager") == 0)
      printf("%s\n", e[i].name);
  }

  return 0;
}