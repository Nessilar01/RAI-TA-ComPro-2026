/*
 * ex02.c
 * Goal: convert a total number of minutes into hours + leftover minutes.
 *
 * Math behind it (this is the whole exercise, really):
 *   - Integer division  (totalMinutes / 60)  throws away the remainder,
 *     giving you the number of FULL hours.
 *   - The modulo operator (totalMinutes % 60) gives you exactly what's
 *     LEFT OVER after removing those full hours -- i.e. the minutes.
 *   Example: 75 / 60 = 1 (int division truncates 1.25 -> 1)
 *            75 % 60 = 15
 */

#include <stdio.h>

int main()
{
    int totalMinutes;   /* input from user            */
    int hours;          /* full hours extracted        */
    int minutes;        /* remaining minutes            */

    printf("Enter total minutes: ");
    scanf("%d", &totalMinutes);

    /* --- The actual conversion --- */
    hours   = totalMinutes / 60;   /* integer division = floor(total/60) */
    minutes = totalMinutes % 60;   /* remainder after removing full hours */

    printf("%d minutes is %d hour(s) and %d minute(s)\n",
           totalMinutes, hours, minutes);

    return 0;
}