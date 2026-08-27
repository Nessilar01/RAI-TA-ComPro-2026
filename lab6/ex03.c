#include <stdio.h>
#include <math.h>   // pow(), sqrt() -- ต้องใส่ header นี้เมื่อใช้ฟังก์ชันคณิตศาสตร์
// Use cc ex03.c -lm to compile 
struct Point {
    float x;
    float y;
};

int main(void) {
    struct Point p1, p2;

    printf("x1: ");
    scanf("%f", &p1.x);
    printf("y1: ");
    scanf("%f", &p1.y);
    printf("x2: ");
    scanf("%f", &p2.x);
    printf("y2: ");
    scanf("%f", &p2.y);

    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;

    // pow(base, exponent) -- ใช้ยกกำลังสองแทนการคูณตรง ๆ (dx*dx)
    // sqrt(x) -- ใช้หารากที่สองแทนฟังก์ชัน my_sqrt() ที่เขียนเอง
    // d = sqrt( (x2-x1)^2 + (y2-y1)^2 )
    float distance = sqrt(pow(dx, 2) + pow(dy, 2));

    printf("Distance between (%g, %g) and (%g, %g) is %.3f unit(s)\n",
           p1.x, p1.y, p2.x, p2.y, distance);

    return 0;
}