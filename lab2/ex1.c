/*
 * ex01.c
 * Goal: declare 3 variables (int, float, char), read each with scanf,
 *       then echo them back with printf.
 *
 * Key teaching point from Chapter 3:
 *   - scanf needs the ADDRESS of the variable (the & operator) for
 *     int, float, and char. The & is NOT needed for string (char array)
 *     types -- but that's ex03/ex05, not this one.
 */

#include <stdio.h>

int main()
{
    /* --- Declare one variable per data type, as required --- */
    int    myInt;      /* whole numbers only              */
    float  myFloat;    /* real numbers, ~7 significant digits */
    char   myChar;     /* a single character, e.g. 'a'    */

    /* --- Integer input --- */
    printf("Please enter an integer value: ");
    scanf("%d", &myInt);          /* %d = int format, & = "address of" */
    printf("You entered %d\n", myInt);

    /* --- Float input --- */
    printf("Please enter a float value: ");
    scanf("%f", &myFloat);        /* %f = float format */
    printf("You entered %.1f\n", myFloat); /* .1f matches expected "41.9" */

    /* --- Character input --- */
    printf("Please enter a character: ");
    scanf(" %c", &myChar);        /* NOTE: leading space in " %c" skips
                                      any leftover newline/whitespace sitting
                                      in the input buffer from the previous
                                      scanf call -- classic C gotcha */
    printf("You entered %c\n", myChar);

    return 0;
}