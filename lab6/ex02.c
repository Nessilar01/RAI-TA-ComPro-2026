#include <stdio.h>

struct Student {
    char name[100];
    int age;
    float score;
};

int main(void) {
    struct Student students[3];

    // --- Same collection loop as ex01.c ---
    for (int i = 0; i < 3; i++) {
        printf("Student %d's name: ", i + 1);
        scanf(" %99[^\n]", students[i].name);

        printf("Student %d's age: ", i + 1);
        scanf("%d", &students[i].age);

        printf("Student %d's score: ", i + 1);
        scanf("%f", &students[i].score);

        printf("\n");
    }

    // --- Find the highest score: a "running max" scan ---
    // Assume index 0 is the max, then check every other element against it.
    // Only swap `top` when we find something strictly greater. This is the
    // standard pattern any time you need "the biggest/smallest of N items".
    int top = 0;
    for (int i = 1; i < 3; i++) {
        if (students[i].score > students[top].score) {
            top = i;
        }
    }

    printf("The highest scores belongs to %s at %.1f scores!\n",
           students[top].name, students[top].score);

    return 0;
}