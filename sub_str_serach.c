#include<stdio.h>
#include<string.h>
int main ()
{
    int i=0,j,k=0;
    char s1[100],s2[100];

    printf("Please enter the string:\n");
    scanf("%s",s1);

    printf("Please enter the substring:\n");
    scanf("%s",s2);

    while(s2[i]!='\0')
    {
          if(s1[i]==s2[0])
            {
                j=1;
                while(s2[j]!='\0'&&s1[j+i]!='\0'&&s2[j]==s1[j+i])
                {
                    j++;
                    k=1;
                }
                if(s2[j]=='\0')
                {
                    printf("The substring is found at the position %d",i+1);
                }
            }
        i++;

    if(k==0)
        {
            if(s1[j+i]=='\0')
            {
              printf("The substring is not found.");
            }

        }
    }
    return 0;

}




