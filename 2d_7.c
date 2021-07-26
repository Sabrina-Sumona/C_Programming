#include<stdio.h>
# define size 5
void printgrid(int grid[ ][size]);


int main ()
{
    int i,j;
    int grid[size][size];
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {

            grid[i][j]=(i*size+j+1);

        }
    }
    printgrid(grid);
    return 0;
}


void printgrid(int grid[][size])
{
    int i,j;

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {

            printf("%d ",grid[j][i]);

        }
        printf ("\n");
    }

}

