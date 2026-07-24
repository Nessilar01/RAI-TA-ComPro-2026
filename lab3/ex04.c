#include<stdio.h>

int main()
{
    char name[50],grade;
    int cal,phy,sci;
    float avg;
    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your Calculus score:");
    scanf("%d",&cal);
    printf("Enter your Physic score:");
    scanf("%d",&phy);
    printf("Enter your Science score:");
    scanf("%d",&sci);
    avg = (cal + phy + sci)/3.0;
    if (avg >= 80)
    {
        grade = 'A';
    }
    else if (avg>=70 &&avg<80)
    {
        grade = 'B';
    }
    else if (avg>=60 &&avg<70)
    {
        grade = 'C';
    }
    else if (avg>=50 &&avg<60)
    {
        grade = 'D';
    }
    else 
    {
        grade = 'F';
    }
    printf("%s, your average is %.2f. You got grade %c\n",name,avg,grade);

}