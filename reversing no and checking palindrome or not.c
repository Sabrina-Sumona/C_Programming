# include <stdio.h>
    int main ()
    {
        int i,j,n,c=0;
        printf ("Please enter the number of the elements:\n");
        scanf("%d",&n);
        int a[n];
        printf ("Now enter the numbers:\n");

            for(i=0;i<=(n-1);i++)
            {

                    scanf("%d",&a[i]);
            }
        printf ("The reversed number of the given number:\n");
            for(j=(n-1);j>=0;j--)
            {

                    printf("%d",a[j]);
            }
            printf("\n");

            for(i=0;i<=(n-1);i++)
            {
            if(a[i]!=a[j])
           {
             c++;
           }
    }

    if(c==0)
    {
      printf("The number is palindrome.");
    }

    else
    {
      printf("The number is not palindrome.");
    }

      return 0;

    }


