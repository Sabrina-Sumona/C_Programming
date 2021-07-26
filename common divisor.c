#include <stdio.h>
    int main ()
    {
        int i,m,n;
        printf ("Please enter the numbers:\n");
        scanf ("%d%d",&n,&m);
        printf ("The common divisors of the numbers:\n");

        for (i=1;i<=n&&i<=m;i++)
        {
            if(n%i==0&&m%i==0)
            {
              printf ("%d\n",i);
            }
        }



    return 0;



    }







