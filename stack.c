#include<stdio.h>

int main()
{
    int a[100],i,top=-1,choice,m;
    printf("enter size of stack:-");
    scanf("%d",&m);
    printf("\n****Manu****\n");
    printf("\n1.Push \n2.Pop \n3.Display \n4.exit");
    do
    {
        printf("\nenter your choice.\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            if(top==m-1)
            {
                printf("\nstack overflow.");
            }
                else
                {
                    printf("\nenter the element.");
                    scanf("%d",&i);
                    top++;
                    a[top]=i;
                }

            break;
        case 2:
            if(top<0)
                printf("stack underflow.\n");
            else
            {
                printf("\nThe element is delete.");
                top--;
            }
            break;
        case 3:
            if(top<0)
            {
                printf("stack is empty.\n");
            }
            else
            {
                printf("Element of stack are.\n");
                for(i=top;i>0;i--)
                {
                    printf("%d\n",a[i]);
                }
            }
            break;
        case 4:
            return 0;

        }
    }
    while(choice!=4);
        return 0;
}
