# include <stdio.h>
    int main ()
    {
        int i,j,n,m,x;
        printf ("Please enter the number of the elements:\n");
        scanf("%d",&n);
        int a[n];
        printf ("Now enter the numbers:\n");

            for(i=0;i<=(n-1);i++)
            {

                    scanf("%d",&a[i]);
            }

            for(i=0;i<=(n-1);i++)
            {
                for(j=i+1;j<=(n-1);j++)


                {
                    if(a[i]>a[j])
                    {
                        m=a[i];
                        a[i]=a[j];
                        a[j]=m;
                    }


                }
            }
            printf ("The sorted numbers:\n");

                for(i=0;i<=(n-1);i++)
                {
                    printf("%d\n",a[i]);
                }

      return 0;

    }


