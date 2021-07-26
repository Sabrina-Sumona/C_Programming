# include <stdio.h>
    int main ()
    {
        int n,i,x;
        printf ("Please enter the number of the elements:\n");
        scanf("%d",&n);
        int a[n];
        printf ("Now enter the numbers:\n");

            for(i=0;i<=(n-1);i++)
            {
                scanf("%d",&a[i]);
            }
          printf ("Now enter the number which position you want to search:\n");
          scanf("%d",&x);

            for(i=0;i<=(n-1);i++)
            {
                if(a[i]==x)
                {
                    printf ("The position of %d is a[%d]",a[i],i);
                    break;
                }
            }


      return 0;

    }


