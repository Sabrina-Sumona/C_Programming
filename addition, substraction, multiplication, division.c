
# include <stdio.h>
 int main ()
    {
        float a,b,addition,subtraction,multiplication,division;
        printf("Enter any two numbers:\n");
        scanf ("%f%f",&a,&b);

        addition=a+b;
        printf("The addition is %f\n",addition);

        subtraction=a-b;
        printf("The subtraction is %f\n",subtraction);

        multiplication=a*b;
        printf("The multiplication is %f\n",multiplication);

            if(b!=0)
            {
                division=a/b;
                printf("The division is %f\n",division);
            }


            else
                printf("The division is not possible\n");

    return 0;


    }

