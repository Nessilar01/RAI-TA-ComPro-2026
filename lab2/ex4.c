/*
 * ex04.c
 * Goal: read Name, Student ID, and 3 subject scores (0-4 scale),
 *       compute cumulative GPA = sum(scores) / number_of_subjects,
 *       print it rounded to 2 decimal places.
 *
 * Design choice: I read ALL three scores as float, even though the
 * sample input shows "4" (a whole number) for Programming. Why?
 * Because %f will happily accept "4" as 4.000000 -- reading everything
 * as float means one consistent type for the GPA math, no int/float
 * mixing bugs later.
 */

#include <stdio.h>

int main()
{
    char  name[50];
    int   studentID;
    float progScore, physScore, calcScore;
    float gpa;

    printf("Enter your Name: ");
    scanf("%s", name);

    printf("Enter your student ID: ");
    scanf("%d", &studentID);

    printf("Enter your Programming score: ");
    scanf("%f", &progScore);

    printf("Enter your Physics score: ");
    scanf("%f", &physScore);

    printf("Enter your Calculus score: ");
    scanf("%f", &calcScore);

    /* --- GPA math ---
     * sum of scores / number of subjects (3 here).
     * Use 3.0 (a float literal), NOT 3, to force floating-point
     * division. If you divide by the int 3, C *may* still produce a
     * float result here because progScore etc. are already float
     * (float / int => float in C's promotion rules), but writing 3.0
     * makes the intent unambiguous and avoids relying on that rule.
     */
    gpa = (progScore + physScore + calcScore) / 3.0;

    printf("Hi %s(%d)! Your GPA is %.2f\n", name, studentID, gpa);

    return 0;
}