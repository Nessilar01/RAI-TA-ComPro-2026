/*
 * ex03.c
 * Goal: collect Name, Age, Height, Weight, Gender, Education and print
 *       them back in a clean summary.
 *
 * Important gotcha this exercise is built around:
 *   "Education Qualification" can contain a SPACE (e.g. "High School").
 *   Plain %s stops reading at the first space, so it would only catch
 *   "High" and drop "School". The Chapter 3 slides give us the fix:
 *       scanf("%[^\n]", str);
 *   which means "keep reading characters UNTIL you hit a newline",
 *   spaces included.
 *
 *   Second gotcha: mixing %d/%f/%c scanf calls leaves a leftover '\n'
 *   character sitting in the input buffer, which %[^\n] would
 *   immediately swallow as an "empty" education field. Fix: put a
 *   leading space in the format string -- " %[^\n]" -- to tell scanf
 *   "skip any leftover whitespace/newlines first."
 */

#include <stdio.h>

int main()
{
    char  name[50];        /* string = char array, no & needed in scanf */
    int   age;
    float height;
    int   weight;
    char  gender;
    char  education[50];   /* may contain a space, so %[^\n] is required */

    printf("Enter your Name: ");
    scanf("%s", name);                 /* string: no & */

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your weight: ");
    scanf("%d", &weight);

    printf("Enter your gender: ");
    scanf(" %c", &gender);             /* leading space eats leftover \n */

    printf("Enter your Education Qualification: ");
    scanf(" %[^\n]", education);        /* leading space + read-until-newline */

    /* --- Display summary --- */
    printf("\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Height: %.1f\n", height);
    printf("Weight: %d\n", weight);
    printf("Education: %s\n", education);

    return 0;
}