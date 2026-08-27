#include <stdio.h>

#define NUM_STUDENTS 3
#define NUM_SUBJECTS 4

// One struct per student: fixed-size name buffer, ID, and a fixed-size
// array of grades. Grouping grades[4] inside the struct (instead of 4
// separate int fields) is what lets us loop over subjects generically
// below, rather than writing math/english/science/history by hand 3 times.
struct Student {
    char name[21];              // up to 20 chars, no spaces, +1 for '\0'
    int id;
    int grades[NUM_SUBJECTS];   // [0]=Math [1]=English [2]=Science [3]=History
};

int main(void) {
    struct Student students[NUM_STUDENTS];
    const char *subjects[NUM_SUBJECTS] = {"Math", "English", "Science", "History"};

    // --- 1. Read in all 3 students ---
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);
        // (void) tells the compiler we're deliberately not checking scanf's
        // return value -- required to stay clean under -Wall -Wextra -Werror
        // on toolchains that flag unused results.
        (void)scanf("%20s %d %d %d %d %d",
                     students[i].name,
                     &students[i].id,
                     &students[i].grades[0],
                     &students[i].grades[1],
                     &students[i].grades[2],
                     &students[i].grades[3]);
        printf("\n");
    }

    // --- 2a. Each student's average grade ---
    float averages[NUM_STUDENTS];
    printf("Student Averages:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        int sum = 0;
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            sum += students[i].grades[j];
        }
        averages[i] = sum / (float)NUM_SUBJECTS;
        printf("%s (ID: %d): %.2f\n", students[i].name, students[i].id, averages[i]);
    }
    printf("\n");

    // --- 2b. Student with the highest average ---
    int top_student = 0;
    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (averages[i] > averages[top_student]) {
            top_student = i;
        }
    }
    printf("Top Student: %s with %.2f\n\n", students[top_student].name, averages[top_student]);

    // --- 2c. Subject with the highest overall average across all students ---
    float subject_avg[NUM_SUBJECTS];
    printf("Subject Averages:\n");
    for (int j = 0; j < NUM_SUBJECTS; j++) {
        int sum = 0;
        for (int i = 0; i < NUM_STUDENTS; i++) {
            sum += students[i].grades[j];
        }
        subject_avg[j] = sum / (float)NUM_STUDENTS;
        printf("%s: %.2f\n", subjects[j], subject_avg[j]);
    }
    printf("\n");

    int top_subject = 0;
    for (int j = 1; j < NUM_SUBJECTS; j++) {
        if (subject_avg[j] > subject_avg[top_subject]) {
            top_subject = j;
        }
    }
    printf("Top Subject: %s with average %.2f\n", subjects[top_subject], subject_avg[top_subject]);

    return 0;
}