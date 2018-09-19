#include<stdio.h>
//#define max 5
int q[100],front=0,rear=-1;
int main()
{
    int ch,max;
    void insert(int);
    void delet(int);
    void display(int);
    //clrscr();
    printf("\nenter number of element:-");
    scanf("%d",&max);
    printf("\nCircular Queue operations\n");
    printf("1.insert\n2.delete\n3.display\n4.exit\n");
    do
    {
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1: insert(max);
	    break;
	case 2: delet(max);
	    break;
	case 3:display(max);
	    break;
	case 4:
		break;
	default:printf("Invalid option\n");
	}
    }while(ch!=4);
}

void insert(int max)
{
    int x;
    if((front==0&&rear==max-1)||(front>0&&rear==front-1))
	printf("Queue is overflow\n");
    else
    {
	printf("Enter element to be insert:");
	scanf("%d",&x);
	if(rear==max-1&&front>0)
	{
	    rear=0;
	    q[rear]=x;
	}
	else
	{
	    if((front==0&&rear==-1)||(rear!=front-1))
		q[++rear]=x;
	}
    }
}
void  delet(int max)
{
    int a;
    if((front==0)&&(rear==-1))
    {
	printf("Queue is underflow\n");
	
    }
    if(front==rear)
    {
	a=q[front];
	rear=-1;
	front=0;
    }
    else
	if(front==max-1)
	{
	    a=q[front];
	    front=0;
	}
	else a=q[front++];
	printf("Deleted element is:%d\n",a);
}

void display(int max)
{
    int i,j;
    if(front==0&&rear==-1)
    {
	printf("Queue is underflow\n");
	
	
    }
    if(front>rear)
    {
	for(i=0;i<=rear;i++)
	    printf("\n%d",q[i]);
	for(j=front;j<=max-1;j++)
	    printf("\n%d",q[j]);
	printf("\nrear is at %d\n",q[rear]);
	printf("\nfront is at %d\n",q[front]);
    }
    else
    {
	for(i=front;i<=rear;i++)
	{
	    printf("\n%d",q[i]);
	}
	printf("\nfront is at %d\n",q[front]);
	printf("\nrear is at %d\n",q[rear]);
   }
    printf("\n");
}

