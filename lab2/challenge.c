/*
 * challenge.c
 * Goal: read 3 integers, compute min, max, sum, and average (2 decimals).
 * Constraint: NO arrays allowed -- so min/max is done with plain
 *             if/else comparisons between 3 separate variables,
 *             not a loop over a collection.
 *
 * Compile rule for this file specifically:
 *     cc -Wall -Werror -Wextra challenge.c
 * -Wall / -Wextra turn on extra warnings, -Werror makes ANY warning
 * a hard compile error. That means: every variable must be used,
 * every printf format specifier must exactly match its argument's
 * type, and nothing can be left ambiguous.
 */

#include <stdio.h>

int main()
{
    int num1, num2, num3;   /* the 3 user inputs               */
    int minVal, maxVal;     /* smallest / largest of the three */
    int sum;                /* total of all three              */
    float avg;              /* average, needs to be float for the
                                "2 digit floating point" requirement */

    /* --- Get the 3 integers --- */
    printf("Enter integer #1: ");
    scanf("%d", &num1);
    printf("Enter integer #2: ");
    scanf("%d", &num2);
    printf("Enter integer #3: ");
    scanf("%d", &num3);

    /* --- Find minimum: start by assuming num1 is smallest,
     *     then challenge it with the other two, one at a time.
     *     This is the "no array" way of doing what a loop+array
     *     would normally do. --- */
    minVal = num1;
    if (num2 < minVal) {
        minVal = num2;
    }
    if (num3 < minVal) {
        minVal = num3;
    }

    /* --- Find maximum: same idea, opposite comparison --- */
    maxVal = num1;
    if (num2 > maxVal) {
        maxVal = num2;
    }
    if (num3 > maxVal) {
        maxVal = num3;
    }

    /* --- Sum and average ---
     * sum / 3.0 (float literal) forces floating point division so we
     * don't lose the decimal part to integer truncation.
     */
    sum = num1 + num2 + num3;
    avg = sum / 3.0;

    /* --- Report results --- */
    printf("\n");
    printf("Results:\n");
    printf("Minimum: %d\n", minVal);
    printf("Maximum: %d\n", maxVal);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}