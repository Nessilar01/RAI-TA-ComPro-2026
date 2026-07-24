#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    if (a == b) 
    {
        printf("Match\n");
    }
    else
    {
        printf("Does not match. Try again\n");
    }
}