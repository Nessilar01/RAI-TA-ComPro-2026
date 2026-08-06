#include <stdio.h>

int main(void)
{
    int num;
    long long factorial = 1;   // int overflows by 13! (6,227,020,800) — use
                                // long long so this holds up for any input
                                // you'd realistically be asked to test.

    printf("Enter a number: ");
    scanf("%d", &num);

    // for loop counts DOWN the definition given in the lab doc: multiply
    // num by every positive integer less than it, down to 1. Counting up
    // from 1 to num gives the identical product, and matches the style
    // used throughout the chapter 5 slides (count=1; count<=n; count++).
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    printf("Factorial of %d is %lld\n", num, factorial);

    return 0;
}