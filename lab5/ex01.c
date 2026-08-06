#include <stdio.h>

int main()
{
    int values[10];   // array to hold 10 integers
    int i;

    // Loop to fill the array from user input
    for (i = 0; i < 10; i++)
    {
        printf("Enter the value %d here: ", i + 1);
        scanf("%d", &values[i]);
    }

    // Loop to print the array back, comma-separated
    printf("Values in array are: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d,", values[i]);
    }
    printf("\n");

    return 0;
}