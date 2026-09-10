#include <stdio.h>

int main(void) {
    int size = 6;
    int array[] = { 3, 1, 2, 4, 5, 6 };
    int *ptr = array;
    int sum = 0;
    int i;

    /* Accumulate by dereferencing ptr+i each iteration - identical
       traversal pattern to ex03/ex04, just folded into a running total. */
    for (i = 0; i < size; i++) {
        sum += *(ptr + i);
    }

    printf("The sum of array is: %d\n", sum);

    return 0;
}