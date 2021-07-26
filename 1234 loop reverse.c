#include <stdio.h>
    int main ()
    {
        int i,n,m;

        printf ("Please enter the lower bound:\n");
        scanf ("%d",&m);

        printf ("Please enter the upper bound:\n");
        scanf ("%d",&n);

        printf ("The series is:\n");

        for (i=n;i>=m;i--)
        {
            printf ("%d ",i);
        }

    return 0;



    }

