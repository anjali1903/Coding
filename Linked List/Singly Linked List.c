#include<stdio.h>
#include<stdlib.h>

struct node { 
    int data; 
    struct node* next; 
};

struct node *start=NULL;

display()
{
	struct node *p=start;
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
	}
}

count()
{
	struct node *p;
	p=start;
	int c=0;
	while(p!=NULL)
	{
		c++;
		p=p->next;
	}
	printf("Number of nodes: %d",c);	
}

create(int item, int n)
{
	struct node *p;
	p=start;
	p=(struct node*)malloc(sizeof(struct node));
	start=p;
	p->data=item;
	p->next=NULL;
	int i;
	for(i=2;i<=n;i++)
	{
		p->next=(struct node*)malloc(sizeof(struct node));
		p=p->next;
		int a;
		printf("\nEnter item:");
		scanf("%d",&a);
		p->data=a;
		p->next=NULL;
	}	
	display();	
}

insert_beg(int item)
{
	struct node *p,*temp;
	p=start;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=item;
	temp->next=p;
	start=temp;
	display();
}

insert_end(int item)
{
	struct node *p,*temp;
	p=start;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=item;
	temp->next=NULL;
	while(p!=NULL)
	{
		p=p->next;
	}
	p->next=temp;
	display();
}

insert_loc(int item,int loc)
{
	struct node *p,*temp;
	p=start;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=item;
	int i;
	while(i<loc-2)
	{
		i++;
		p=p->next;
	}
	temp->next=p->next;
	p->next=temp;
	display();
	
}

insert_val(int item,int val)
{
	struct node *p,*temp;
	p=start;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=item;
	while(p!=NULL)
	{
		if(p==NULL)
		{
			printf("\nValue not found");
			break;
		}
		else
		{
			if(p->data==val)
			{
				temp->next=p->next;
				p->next=temp;				
			}
			p=p->next;
		}
	}
	
	display();
	
}

dele(int val)
{
	struct node *p,*temp;
	p=start;
	temp=p->next;
	if(p->data==val)
	{
		p=p->next;
		start=p;
	}
	else
	{
		while(p->data!=val)
		{
			p=p->next;
			temp=temp->next;
			break;
		}
		p->next=temp->next;
	}
	display();

	
}


int main()
{
	//create
	int item,n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("\nEnter item:");
	scanf("%d",&item);	
	create(item,n);
	
	//insert at beginning
	/*int a;
	printf("\nInsert at beginning item:");
	scanf("%d",&a);
	insert_beg(a);*/
	
	//insert at end
	/*int b;
	printf("\nInsert at end item:");
	scanf("%d",&b);
	insert_end(b);*/
	
	//insert at location
	/*int loc,c;
	printf("\nEnter location:");
	scanf("%d",&loc);
	printf("\nEnter item:");
	scanf("%d",&c);
	insert_loc(c,loc);*/
	
	//insert after value
	/*int val,d;
	printf("\nEnter value:");
	scanf("%d",&val);
	printf("\nEnter item:");
	scanf("%d",&d);
	insert_val(d,val);*/
	
	//delete
	/*int del;
	printf("\nEnter item to be deleted:");
	scanf("%d",&del);
	dele(del);*/
	
	
	
	return 0;
}
