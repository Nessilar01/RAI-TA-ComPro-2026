/*
 * ex05.c
 * Goal: read full name (has a space!), age, height, university name,
 *       then print a formatted greeting using only the FIRST name.
 *
 * The tricky part: input is "Poom Konghuyrob" but the output only
 * wants "K.Poom" (first name + a "Khun" honorific prefix). We don't
 * know how to split strings with fancy string-library functions yet
 * at this point in the course, so I use a tool that IS in the same
 * family as scanf: sscanf() -- "string scanf". It works exactly like
 * scanf, except it reads from a string already in memory instead of
 * from the keyboard. Reading %s from the full-name string naturally
 * stops at the first space, which hands us just the first name.
 */

#include <stdio.h>

int main()
{
    char  fullName[50];     /* e.g. "Poom Konghuyrob" (contains a space) */
    char  firstName[50];    /* e.g. "Poom" (extracted from fullName)     */
    int   age;
    float height;
    char  university[50];

    printf("Enter your full name: ");
    scanf("%[^\n]", fullName);   /* read whole line, spaces included */

    printf("Enter your age: ");
    scanf("%d", &age);           /* %d auto-skips the leftover newline */

    printf("Enter your heght: ");
    scanf("%f", &height);

    printf("Enter you University name: ");
    scanf("%s", university);     /* single word, %s already skips whitespace */

    /* --- Pull just the first name out of fullName ---
     * sscanf reads FROM the string fullName as if it were keyboard
     * input. "%s" reading stops at the first space it finds, so
     * firstName ends up holding just "Poom".
     */
    sscanf(fullName, "%s", firstName);

    /* --- Print the formatted greeting --- */
    printf("\n");
    printf("Hi! Everyone. This is K.%s from %s. I am %d years old\n",
           firstName, university, age);
    printf("and my height is \n%.1f cm tall.\n", height);

    return 0;
}