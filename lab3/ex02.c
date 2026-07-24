#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a >=1 && a<=100)
    {
        if (a%2 ==0 )
        {
            printf("%d is even\n",a);
        }
        else
        {
            printf("%d is odd\n",a);
        }
    }
    else
    {
        printf("%d is out of range\n",a);
    }
}