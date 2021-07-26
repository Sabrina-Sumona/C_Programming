#include<stdio.h>
int main ()
{
    int i,c=0;
    char s1[100],s2[100];
    printf("Please enter the two strings:\n");
    scanf("%s%s",s1,s2);

    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
           {
             c++;
           }
    }

    if(c==0)
    {
      printf("The strings are equal.");
    }

    else
    {
      printf("The strings are not equal.");
    }



    return 0;

}



