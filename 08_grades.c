#include <stdio.h>

int main()
{
  int marks[5], i;
  int total = 0;
  float percentage;
  int pass = 1;

  // Input marks
  printf("Enter marks for 5 courses:\n");
  for (i = 0; i < 5; i++)
  {
    printf("Course %d: ", i + 1);
    scanf("%d", &marks[i]);

    // Check pass condition
    if (marks[i] < 40)
    {
      pass = 0;
    }
    total += marks[i];
  }

  // Check result
  if (pass == 1)
  {
    percentage = total / 5.0;

    printf("\nResult: PASS\n");
    printf("Aggregate Percentage: %.2f%%\n", percentage);

    // Grade assignment
    if (percentage >= 75)
    {
      printf("Grade: Distinction\n");
    }
    else if (percentage >= 60)
    {
      printf("Grade: First Division\n");
    }
    else if (percentage >= 50)
    {
      printf("Grade: Second Division\n");
    }
    else
    {
      printf("Grade: Third Division\n");
    }
  }
  else
  {
    printf("\nResult: FAIL\n");
    printf("Student has scored less than 40 in one or more subjects.\n");
  }

  return 0;
}
