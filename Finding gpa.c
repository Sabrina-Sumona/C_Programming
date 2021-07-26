#include<stdio.h>
int main ()
{
    float credit_hours[]={3.0,3.0,3.0,3.0,3.0,3.0,1.5,1.5};
    float grade_points[]={3.5,4.0,3.75,4.0,3.5,4.0,3.75,4.0};
    int i,n;
    float sum1=0.0,sum2=0.0,gpa=0.0;
    for(i=0;i<8;i++)
    {
        sum1=sum1+credit_hours[i]*grade_points[i];
        sum2=sum2+credit_hours[i];
    }
    gpa=sum1/sum2;
    printf("%f",gpa);

    return 0;
}

