#include<stdio.h>

void swap(int *a,int *b);

int main()
{
    int a=5,b=9;
    printf("before swap a=%d and b=%d",a,b);
    swap(&a,&b);
    printf("\nafter swap a=%d and b=%d",a,b);

    return 0;
}

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
