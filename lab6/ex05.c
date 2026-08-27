#include <stdio.h>

struct Time {
    int minute;
    int seconds;
};

int main(void) {
    int total_seconds = 0;

    for (int i = 0; i < 3; i++) {
        struct Time t;

        printf("Time input (m:s): ");
        // "%d:%d" matches "1:09" literally -- reads an int, expects a ':',
        // then reads a second int. No manual string-splitting needed.
        scanf("%d:%d", &t.minute, &t.seconds);

        total_seconds += t.minute * 60 + t.seconds;
    }

    printf("Total time elasped: %d second(s)\n", total_seconds);

    return 0;
}