#include <stdio.h>

struct Student
{
  int roll;
  char name[50];
  float marks[3];
  float total;
  float percentage;
};

int main()
{
  struct Student s[100];
  int n, i, j;

  printf("Enter number of students: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("\nEnter details of student %d:\n", i + 1);

    printf("Roll Number: ");
    scanf("%d", &s[i].roll);

    printf("Name: ");
    scanf("%s", s[i].name);

    printf("Marks in 3 subjects: ");
    s[i].total = 0;

    for (j = 0; j < 3; j++)
    {
      scanf("%f", &s[i].marks[j]);
      s[i].total += s[i].marks[j];
    }

    s[i].percentage = s[i].total / 3.0;
  }

  printf("\nStudent Result:\n");

  for (i = 0; i < n; i++)
  {
    printf("\nRoll No: %d\n", s[i].roll);
    printf("Name: %s\n", s[i].name);
    printf("Total Marks: %.2f\n", s[i].total);
    printf("Percentage: %.2f%%\n", s[i].percentage);
  }

  return 0;
}