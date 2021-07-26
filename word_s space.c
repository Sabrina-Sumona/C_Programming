#include<stdio.h>
int main ()
{
    int i;
    char s1[100];
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]!=' ')
        {
            printf("%c",s1[i]);
            printf(" ");

        }

    }
    return 0;
}
