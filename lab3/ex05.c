#include <stdio.h>

int main()
{
    float hight,radius,volume,pi;
    pi = 3.14;
    printf("Enter cone hight:");
    scanf("%f",&hight);
    printf("Enter cone base radius:");
    scanf("%f",&radius);
    volume = (1.0/3.0)*pi*radius*radius*hight;
    printf("Cone volume %.1f",volume);
    if (volume >260)
    {
        printf("This cone is perfect for Supun project\n");
    }
    else
    {
        printf("This cone is not fit for this project\n");
    }
}