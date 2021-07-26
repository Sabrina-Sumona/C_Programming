
# include <stdio.h>
 int main ()
    {
        int choice;
        float a,b,addition,subtraction,multiplication,division;
        printf ("1.Perform addition\n2.Perform subtraction \n3.Perform multiplication\n4.Perform division\n");
        scanf ("%d",&choice);

        if(choice==1)
        {
            printf("Enter any two numbers for addition\n");
            scanf ("%f%f",&a,&b);
            addition=a+b;
            printf("The addition is %f",addition);

        }

        else if(choice==2)
        {
            printf("Enter any two numbers for subtraction\n");
            scanf ("%f%f",&a,&b);
            subtraction=a-b;
            printf("The subtraction is %f",subtraction);

        }

        else if(choice==3)
        {
            printf("Enter any two numbers for multiplication\n");
            scanf ("%f%f",&a,&b);
            multiplication=a*b;
            printf("The multiplication is %f",multiplication);

        }

        else
        {
            printf("Enter any two numbers for division\n");
            scanf ("%f%f",&a,&b);

                if(b!=0)
                {
                    division=a/b;
                    printf("The division is %f",division);
                }


                else
                    printf("The division is not possible");

        }

    return 0;


    }
