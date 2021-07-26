#include <stdio.h>
#include<math.h>
    int main ()
    {
        int i,m,n,s;
        printf ("Please enter the number:\n");
        scanf ("%d",&n);
        m=n;

        s=sqrt(n);
        if(s*s==m)
        {
            printf("%d is a perfect square.",m);
        }
        else
        {
            printf("%d is not a perfect square.",m);
        }





    return 0;



    }








