#include <stdio.h>

int main(void) {
    int test = 0;

    /* Declare an int pointer, following the slide's pattern:
       type *pointer_name;                              (Chapter 8, slide 4) */
    int *ptr;

    /* '&' is the Reference Operator - "gives you the address of a variable"
       (slide 5). This is the ONLY way to legally get test's address. */
    ptr = &test;

    /* %p is the correct printf conversion for a pointer value (slide 8).
       Cast to (void *) - technically required by the C standard for %p,
       and -Wall will flag it if you skip the cast. */
    printf("The address of test variable is at: %p\n", (void *)ptr);

    return 0;
}