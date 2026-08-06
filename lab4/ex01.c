#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;
    float average;

    // Rule from slide 24: use 'for' when you know EXACTLY how many
    // iterations you need. Here that's fixed at 10, so for is correct.
    for (int i = 1; i <= 10; i++)
    {
        printf("%d.Enter the number: ", i);
        scanf("%d", &num);
        sum += num;   // accumulate as we go — no need to store all 10 values
    }

    // Cast BEFORE dividing. sum/10 alone is int/int -> truncated integer
    // division (e.g. 112/10 = 11, not 11.2). Casting sum forces float math.
    average = (float)sum / 10;

    printf("\ntotal sum is %d\n", sum);
    printf("Average is %.2f\n", average);

    return 0;
}