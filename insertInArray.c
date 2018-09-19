#include<stdio.h>

int main()
{
    int a[100],i,n,position,value;

    printf("Enter size of array");
    scanf("%d",&n);

    printf("\nenter array.");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nenter position in array for insert");
    scanf("%d",&position);
    printf("\nenter value:-");
    scanf("%d",&value);

    for(i=n;i>=position;i--)
    {
        a[i]=a[i-1];

    }
    a[position-1]=value;
    for(i=0;i<=n;i++)
    {
        printf("\n%d",a[i]);
    }
}
