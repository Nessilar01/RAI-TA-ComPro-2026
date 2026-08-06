#include <stdio.h>

int main(void)
{
    int num;

    // Slide 41: do-while is for when you check the condition AFTER the
    // first pass. That fits here — you must read a number before you can
    // know whether it's the 0 that ends the program.
    do
    {
        printf("Enter the number: ");
        scanf("%d", &num);

        if (num == 0)
        {
            printf("Exiting Program... Bye\n");
        }
        else if (num % 2 == 0)
        {
            printf("%d is even.\n", num);
        }
        else
        {
            printf("%d is odd.\n", num);
        }
    }
    while (num != 0);

    return 0;
}