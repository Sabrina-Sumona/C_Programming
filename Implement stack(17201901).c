#include<stdio.h>
int top=-1,max=5,n;
void push ( );
int pop (int n);

int main ()
{
    int a;
    scanf("%d",&n);
    push( );
    a=pop(n);
    printf("%d\n",a);

    return 0;

}

void push ( )
{
    int stack[max];
    if(top==(max-1))
    {
     printf("full\n");
    }
    else
    {
        ++top;
        stack[top]=n;
        printf("%d\n",n);
    }
}

int pop (int n)
{
    int stack[max];
    if (top==-1)
    {
        printf("empty\n");
        return (top);
    }
    else
    {
        n=stack[top];
        --top;
        printf("%d\n",stack[top]);
    }
    return (n);
}

