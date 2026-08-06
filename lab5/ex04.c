#include <stdio.h>

#define SIZE 10

int main()
{
    int values[SIZE];
    int even_count = 0;
    int odd_count = 0;
    int i;

    // Read 10 integers into the array
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    // Modulo 2 tells us even (0) vs odd (nonzero)
    for (i = 0; i < SIZE; i++)
    {
        if (values[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);

    return 0;
}