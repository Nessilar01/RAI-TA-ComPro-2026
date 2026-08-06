#include <stdio.h>

int main()
{
    int n;
    int i, j;
    int count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];   // size decided at runtime by user input (VLA)

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // For each value, only report its count the FIRST time we
    // see it. Without this check, a repeated value like 1 in
    // "1 2 2 3 1" would print its own "occurs 2 times" line twice.
    for (i = 0; i < n; i++)
    {
        int already_shown = 0;

        // Look backwards: did this value already appear earlier?
        for (j = 0; j < i; j++)
        {
            if (nums[j] == nums[i])
            {
                already_shown = 1;
                break;
            }
        }

        if (already_shown)
            continue;   // skip it, we already printed its count

        // First time seeing this value: count it across the whole array
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (nums[j] == nums[i])
                count++;
        }

        printf("Element %d occurs %d times\n", nums[i], count);
    }

    return 0;
}