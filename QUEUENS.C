#include<stdio.h>
#include<conio.h>
void enqueue(int n);
void dequeue();
void display();
int rear=-1,front=-1,a[100];
int main()
{
	int ch,n;

	printf("\nentre size of queue:");
	scanf("%d",&n);
	printf("1.ENQUEUE\n");
	printf("2.DEQUEUE\n");
	printf("3.DISPLAY\n");
	printf("4.EXIT\n");
	do
	{

		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue(n);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:

			break;
			default:
				printf("\nenter wrong choice");
				break;
	}
	}
		while(ch!=4);
		getch();
}
void enqueue(int n)
{
	int add;
	if(rear>=n-1)
	{
		printf("\nqueue is overflow.");
	}
	else
	{
		front=0;
		printf("\n insert element:");
		scanf("%d",&add);
		rear++;
		a[rear]=add;
	}
}
void dequeue()
{
	if(front==-1 ||front>=rear)
	{
		printf("\nqueue is underflow.");
	}
	else
	{
		printf("\nelement delete.");
		front=front+1;
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("\nqueue underflow.");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n%d",a[i]);
		}
	}
}




