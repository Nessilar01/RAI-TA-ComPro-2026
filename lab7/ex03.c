#include <stdio.h>

int main(void) {
    int array[] = { 3, 1, 2, 4, 5, 6 };
    int size = sizeof(array) / sizeof(array[0]); /* = 6, computed, not hardcoded */

    /* An array name decays to a pointer to its first element - this is
       "Method 1" from slide 19: vPtr = v; (no & needed, unlike a plain
       variable). ptr now equals &array[0]. */
    int *ptr = array;

    int max = *ptr; /* seed max with array[0] via dereference */
    int i;

    /* array[i] is FORBIDDEN here per the lab hint - we use the identity
       from slide 34: *(bPtr + i) is equivalent to bPtr[i]. Pointer + int
       arithmetic auto-scales by sizeof(int) (slide 22), so this walks
       element-by-element, not byte-by-byte. */
    for (i = 1; i < size; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("Max value: %d\n", max);

    return 0;
}