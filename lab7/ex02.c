#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 5;

    /* Point each pointer at its variable's address - same &var pattern
       as slide 6/7 (ptr_int = &count;) */
    int *pa = &a;
    int *pb = &b;
    int temp;

    printf("Before reverse: a = %d, b = %d\n", *pa, *pb);

    /* Classic 3-step swap, but every access goes through the pointer's
       dereference operator '*' (slide 7: "*ptr gets you the value from
       the address"). We never touch 'a' or 'b' by name after this point -
       *pa IS a, *pb IS b. */
    temp = *pa;   /* save a's value              */
    *pa = *pb;    /* write b's value into a      */
    *pb = temp;   /* write saved a's value into b */

    printf("After reverse: a = %d, b = %d\n", *pa, *pb);

    return 0;
}