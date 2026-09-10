#include <stdio.h>

#define SIZE 5

int main(void) {
    int array[SIZE];
    int *ptr = array; /* array decays to pointer to element 0 */
    int i, j, temp;

    printf("Enter %d integers: ", SIZE);

    /* scanf needs an address per slot. *(ptr + i) is a value, so we take
       its address with '&' - same reference operator as slide 5, just
       applied to a pointer-arithmetic expression instead of a plain var.
       This satisfies "no arr[i]" since we never write array[i] or ptr[i]. */
    for (i = 0; i < SIZE; i++) {
        if (scanf("%d", &*(ptr + i)) != 1) {
            return 1; /* bail out cleanly on bad input - -Wall/-Wextra
                         will flag an ignored scanf return otherwise */
        }
    }

    /* Bubble Sort: classic O(n^2) adjacent-swap sort, but every read and
       write to the array goes through pointer offsets. This mirrors the
       swap logic from ex02, just applied inside nested loops. */
    for (i = 0; i < SIZE - 1; i++) {
        for (j = 0; j < SIZE - 1 - i; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    printf("Sorted: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}