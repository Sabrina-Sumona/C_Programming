#include<stdio.h>
int main ()
{
    int i;
    char s1[100],s2[100];
    printf("Please enter the string:\n");
    scanf("%s",s1);

    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='0';

    printf("So the coping string is %s",s2);

    return 0;

}

