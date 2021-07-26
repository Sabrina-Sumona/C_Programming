#include<stdio.h>
int main ()
{
    int i,j,k,r1,r2,c1,c2,x=0;
    printf("Please enter the number of rows and columns of 1st matrix:\n");
    scanf("%d%d",&r1,&c1);
    printf("Please enter the number of rows and columns of 2nd matrix:\n");
    scanf("%d%d",&r2,&c2);

    int a[10][10],b[10][10],c[10][10];

    if(c1==r2)
    {
        printf("\nNow enter the 1st matrix:\n");

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

    printf("\nNow enter the 2nd matrix:\n");

    for(i=0;i<r2;i++)
        {
        for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }


    for(i=0;i<r1;i++)
        {
        for(j=0;j<c2;j++)
            {
                for(k=0;k<r2;k++)
                {

                    x=x+a[i][k]*b[k][j];
                }
                c[i][j]=x;
                x=0;

            }

        }

    printf("So,the multiplication matrix is:\n");
    for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Sorry the multiplication is not possible.:\n");
    }

  return 0;
}
