#include <stdio.h>

// A struct bundles related fields under ONE type, same idea as Chapter 7's
// `struct student { name, surname, age, gender }`. Here: name, age, score.
struct Student {
    char name[100];   // "name (100 characters max)"
    int age;
    float score;
};

int main(void) {
    struct Student students[3];  // structure array -> one declaration, 3 records
                                  // (the lecture's alternative to student1_name,
                                  // student2_name, ... which doesn't scale)

    // --- Collect data for all 3 students ---
    for (int i = 0; i < 3; i++) {
        printf("Student %d's name: ", i + 1);
        // " %99[^\n]" = skip leading whitespace, then read up to 99 chars
        // until a newline. Needed because "John Smith" contains a space --
        // a plain scanf("%s", ...) would stop at "John" and leave "Smith"
        // sitting in the input buffer for the next read.
        scanf(" %99[^\n]", students[i].name);

        printf("Student %d's age: ", i + 1);
        scanf("%d", &students[i].age);

        printf("Student %d's score: ", i + 1);
        scanf("%f", &students[i].score);

        printf("\n");
    }

    // --- Print back what's stored in the struct ---
    // Accessing a member uses struct_var.member, exactly as in the slides
    // (pr1.name, pr1.count, ...).
    for (int i = 0; i < 3; i++) {
        printf("Student %d name is \"%s\", age %d. score %.1f\n",
               i + 1, students[i].name, students[i].age, students[i].score);
    }

    return 0;
}