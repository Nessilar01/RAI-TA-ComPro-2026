#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication Table for %d:\n", num);

    // Fixed range 1-12, known ahead of time -> for loop (slide 41 rule again)
    for (int i = 1; i <= 12; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}