#include<stdio.h>
#include <cstdlib>
#include<cstdlib>


void create();
void insert();
void delet();
void display();

struct node{
	int info;
	struct node *link;
};
struct node *first=NULL ,*last=NULL,*next,*pre,*New;
void create()
{
	New=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the data:");
	scanf("%d",&New->info);
	New -> link=NULL;
	first = New;
	last=New;
}
void insert()
{
	int pos,c=1;
	New=(struct node *) malloc (sizeof(struct node));
	printf("\nenter the data:");
	scanf("%d",&New->info);
	printf("\nenter the position:");
	scanf("%d",&pos);

	if((pos==1) && first!=NULL)
	{
		New -> link=first;
		first=New;
	}
	else
	{
		next=first;
		while(c<pos)
		{
			pre=next;
			next=pre->link;
			c++;
		}
		if(pre==NULL)
		{
			printf("\nInvaid position.");
		}
	}
}
void delet()
{
	int pos,c=1;
	printf("\nenter the position :");
	scanf("%d",&pos);
	if(first==NULL)
	{
		printf("\nlist is empty.");
	}
	else if((pos==1)&&(first->link==NULL))
	{
		printf("\ndeleted element id:%d",first->info);
		free(first);
		first=NULL;
	}
	else if((pos==1)&&(first->link!=NULL))
	{
		New=first;
		first=first->link;
		New->link=NULL;
		printf("\nDeleted element is:%d",New->info);
		free(New);
	}
	else
	{
		New=first;
		while(c<pos)
		{
			New=next;
			next=next->link;
			c++;
		}
		New->link=next->link;
		next->link=NULL;
		if(next==NULL)
		{
			printf("\nInvalid position.");
		}
		else
		{
			printf("\nDelete element is:%d",next->info);
			free(next);
		}
	}
}
void display()
{
	New=first;
	while(New!=NULL)
	{
		printf("\n%d",New->info);
		New=New->link;
	}
}
int main()
{       int ch;
	//clrscr();
	printf("\nsingly Linklist");
	while(1)
	{
		printf("\n\n1.create.\n2.insert.\n3.delete\n4.exit.");
		printf("\nenter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: create();
				display();
			break;
			case 2: insert();
				display();
			break;
			case 3:
				delet();
				display();
			break;
			case 4:
				exit(0);
			break;
			default:
				printf("\nenter wrong choice");
			break;
		}
	}

//getch();
}
