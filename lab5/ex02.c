#include <stdio.h>

#define SIZE 9

int main()
{
    int original[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int reversed[SIZE];
    int i;

    // reversed[i] takes from the opposite end of original
    // e.g. reversed[0] = original[8], reversed[1] = original[7], ...
    for (i = 0; i < SIZE; i++)
    {
        reversed[i] = original[SIZE - 1 - i];
    }

    // Print the reversed array
    printf("Reversed Array: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    return 0;
}