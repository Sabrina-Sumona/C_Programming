#include<stdio.h>
float cel(float x);
float fer(float y);

int main ()
{
    int ch;
    float a,b,c,f;
    printf("Enter your choice:\n");
    printf("1.Celsius to ferhenheight\n2.Ferhenheight to celsius\n");
    scanf("%d",&ch);
    if(ch==1)
    {
       scanf("%f",&c);
       a=cel(c);
       printf("%f",a);

    }
    else
    {
       scanf("%f",&f);
       b=fer(f);
       printf("%f",b);
    }


    return 0;
}


    float cel(float x)
    {
      float z;
      z=((9*x)/5)+32;
      return z;
    }



    float fer(float y)
    {
     float w;
     w=(5*(y-32))/9;
     return w;
    }
