#include<stdio.h>
int main ()
{
    int i=0;
    char s1[100];
    printf("Please enter the string:\n");
    scanf("%s",s1);

    for( ;s1[i]!='\0'; )
    {
        i++;
    }

    printf("So the length of the string is %d",i);

    return 0;

}
