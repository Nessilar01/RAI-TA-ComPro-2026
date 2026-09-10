#include <stdio.h>

int main(void) {
    int size = 6;
    int array[] = { 3, 1, 2, 4, 5, 6 };
    int *ptr = array; /* array decays to &array[0], slide 19 Method 1 */
    int i;

    /* Same *(ptr + i) equivalence as slide 32/34's "Pointer/offset
       notation" examples - no [] indexing on either ptr or array. */
    for (i = 0; i < size; i++) {
        printf("%d\n", *(ptr + i));
    }

    return 0;
}