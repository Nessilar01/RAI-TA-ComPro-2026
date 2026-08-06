#include <stdio.h>

#define NUM_STUDENTS 5

int main()
{
    int marks[NUM_STUDENTS];
    int total = 0;
    int highest;
    int i;

    // Read marks for each student into the array
    for (i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Seed "highest" with the first student's mark, then
    // sum totals and update highest in a single pass
    highest = marks[0];
    for (i = 0; i < NUM_STUDENTS; i++)
    {
        total = total + marks[i];
        if (marks[i] > highest)
            highest = marks[i];
    }

    printf("Total Marks : %d\n", total);
    printf("Highest Marks: %d\n", highest);

    return 0;
}