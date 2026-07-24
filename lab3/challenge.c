#include<stdio.h>

int main()
{
    float cal , phy , com , GPAcal,GPAphy,GPAcom,GPA;
    char Gradecal , Gradephy , Gradecom;
    printf("Calculus score:");
    scanf("%f",&cal);
    printf("Physic score:");
    scanf("%f",&phy);
    printf("Compro score:");
    scanf("%f",&com);
    if (cal >= 80)
    {
        Gradecal ='A';
        GPAcal = 4.0;
    }
    else if (cal>=70 &&cal<80)
    {
        Gradecal ='B';
        GPAcal = 3.0;
    }
    else if (cal>=60 &&cal<70)
    {
        Gradecal ='C';
        GPAcal = 2.0;
    }
    else if (cal>=50 &&cal<60)
    {
        Gradecal ='D';
        GPAcal = 1.0;
    }
    else if (cal<50)
    {
        Gradecal ='F';
        GPAcal = 0.0;
    }
    if (phy >= 80)
    {
        Gradephy ='A';
        GPAphy = 4.0;
    }
    else if (phy>=70 &&phy<80)
    {
        Gradephy ='B';
        GPAphy = 3.0;
    }
    else if (phy>=60 &&phy<70)
    {
        Gradephy ='C';
        GPAphy = 2.0;
    }
    else if (phy>=50 &&phy<60)
    {
        Gradephy ='D';
        GPAphy = 1.0;
    }
    else if (phy<50)
    {
        Gradephy ='F';
        GPAphy = 0.0;
    }
    if (com >= 80)
    {
        Gradecom ='A';
        GPAcom = 4.0;
    }
    else if (com>=70 &&com<80)
    {
        Gradecom ='B';
        GPAcom = 3.0;
    }
    else if (com>=60 &&com<70)
    {
        Gradecom ='C';
        GPAcom = 2.0;
    }
    else if (com>=50 &&com<60)
    {
        Gradecom ='D';
        GPAcom = 1.0;
    }
    else if (com<50)
    {
        Gradecom ='F';
        GPAcom = 0.0;
    }
    GPA = (GPAcal + GPAcom + GPAphy)/3.0;
    printf("%-10s %-10s %-10s %-10s\n","Subject","Score","Grade","Grade");
    printf("---------------------------------------\n");
    printf("%-10s %-10.2f %-10.2f %-10.2f\n,"cal")


}