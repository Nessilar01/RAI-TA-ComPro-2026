#include <stdio.h>

#define SIZE 8

int main()
{
    int nums[SIZE];
    int smallest, largest;
    int i;

    // Read 8 numbers into the array
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    // Seed both trackers with the first element,
    // then sweep the rest and update as needed
    smallest = nums[0];
    largest = nums[0];
    for (i = 1; i < SIZE; i++)
    {
        if (nums[i] < smallest)
            smallest = nums[i];
        if (nums[i] > largest)
            largest = nums[i];
    }

    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);

    return 0;
}