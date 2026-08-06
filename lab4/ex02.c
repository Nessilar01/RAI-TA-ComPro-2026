#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;
    int i = 1;   // 'while' has no built-in counter (unlike for's initial/change
                 // slots on slide 24) — we manage i ourselves.

    while (i <= 10)
    {
        printf("%d.Enter the number:", i);
        scanf("%d", &num);
        sum += num;
        i++;   // forget this and it's an infinite loop — condition never changes
    }

    printf("\nTotal sum is %d\n", sum);

    return 0;
}