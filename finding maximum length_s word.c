#include<stdio.h>
#include<string.h>
int main ()
{
    int i,j,k,l=0,max=0;
    char s1[100],s2[100],s3[100];
    gets(s1);

    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==' ')
        {
            j=0;
            s2[j]='\0';
            if(j>max)
            {
                max=j;
                for(k=0;s2[k]!='\0';k++)
                {
                    s3[k]=s2[k];
                }
                s3[k]='\0';
            }
            l=0;
            j=0;
        }

        else
        {
            s2[j]=s1[i];
            j++;
        }
    }

     if(j>max)
            {
                max=j;

                for(i=0;s2[i]!='\0';i++)
                {
                    s3[i]=s2[i];
                }
            }
    s3[i]='\0';

    printf("Max=%s",s3);
    printf("\nlength=%d",max);


    return 0;
}


