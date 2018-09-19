#include<stdio.h>

int main()
{
    int a[100],i,n,position;
    printf("enter size of array:-");
    scanf("%d",&n);

    printf("enter array.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter position in array;-");
    scanf("%d",&position);

    for(i=position-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}
