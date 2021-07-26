#include<stdio.h>
int main ()
{
    float dis,tm,sp;

    printf("Please enter the distance:\n");
    scanf("%f",&dis);
    dis=dis*1000;

    printf("Please enter the time:\n");
    scanf("%f",&tm);
    tm=tm*60*60;

    sp=dis/tm;
    printf("So the speed= %f m/s.",sp);


    return 0;

}
