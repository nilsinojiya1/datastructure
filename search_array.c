#include<stdio.h>

int main()
{
    int a[100],i,n,c=0,search;
    printf("enter size of array;-");
    scanf("%d",&n);
    printf("\nEnter array.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter element for search:-");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            printf("%d is in array at %d position",search,i+1);
            c++;
        }
    }
    if(c==0)
    {
        printf("%d is not available in array",search);
    }
    return 0;
}
