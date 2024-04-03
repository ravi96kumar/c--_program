#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
enum linked{INSERT_F=1,DEL_F,DIS,EXIT,INSERT_R,DEL_R,MIDDLE_INSERT,MIDDELE_DELETE};
void insert_f(int);
int del_f();
void dis();
void insert_r(int);
int del_r();
void insert_middle(int ,int);
struct node *head=NULL;
struct node
{
int data;
struct node *link;
};

int main()
{
	while(1)
	{
		int choice;
		printf("1-INSERT,2-DELETE,3-DISPLAY,4-EXIT,5-INSERT_R,6-DELETE_R,7-MIDDLE_INSERT,8-MIDDLE_DEL\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case INSERT_F:
			{
				int item;
				printf("enter item\n");
				scanf("%d",&item);
				insert_f(item);
			}
			break;
		case DEL_F:
			{
				int del;
				del=del_f();
				if(del==0)
				{
				}
				else
				{
					printf("deleted item is: %d\n",del);
				}
			}
			break;
		case DIS:
			{
				dis();
			}
			break;
		case EXIT:
			{
				exit(0);
			}
			break;
			case INSERT_R:
			{
				int item;
				printf("enter item\n");
				scanf("%d",&item);
				insert_r(item);
			}
			break;
			case DEL_R:
			{
				int del;
				del=del_r();
				if(del==0)
				{
				}
				else
				{
					printf("deleted item is: %d\n",del);
				}
			}
			break;
			case MIDDLE_INSERT:
				{
				int item,pos;
				printf("enter item\n");
				scanf("%d",&item);
				printf("enter position\n");
				scanf("%d",&pos);
				insert_middle(item,pos);
			}
			break;
			default:
			{
				printf("invalid item\n");
			}
			break;
		}
	}
}

void insert_f(int item)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=head;
	struct node* q=head;
	if(temp!=NULL)
	{
		if(head==NULL)
		{
			temp->data=item;
			head=temp;
			temp->link=head;
		}
		else
		{
		temp->data=item;
	 while(ptr->link!=q)
	{
        ptr=ptr->link;
	}
	 temp->link=head;
	 head=temp;
	 ptr->link=head;
	}
	}
	 else
	{
        printf("dynamic memory not created\n");
    }

}
int del_f()
{
	int del=0;
    if(head==NULL)
    {
        printf(" no elements\n");
    }
	else
	{
	struct node *temp=head;
    struct node *ptr=temp;
		while(ptr->link!=head)
	{
        ptr=ptr->link;
	}
	if(temp->link==head)
	{
      head=NULL;
	  del=temp->data;
	}
	else{
	head=temp->link;
	ptr->link=head;
	del=temp->data;
	}
	free(temp);
	temp=NULL;
	}
	return(del);
}
void dis()
{
    int count=0;
	struct node *temp=head;
	struct node*q=head;
	if(head==NULL)
	{
		printf("no elements\n");
	}
	else
	{
		while(temp->link!=q)
	{
		printf("%d\n",temp->data);
        temp=temp->link;
        count++;
	}count++;
       printf("%d\n",temp->data);
       printf("\n%d nodes\n",count);
	}
}
void insert_r(int item)
{
    struct node* temp=(struct node*)malloc(sizeof(struct  node));
    if(temp!=NULL)
    {
		if(head==NULL)
		{
			insert_f(item);
		}
		else
		{
       struct node* last=head;
    while(last->link!=head)
    { 
		last=last->link;
    }
        temp->data=item;
		temp->link=head;
        last->link=temp;
        
    }
	}
    else
	{
        printf("\n dynamic memory not created");
    }

}
int del_r()
{
    int del;
    if(head==NULL)
    {
        printf("\n no elements");
        return del;
    }
    else
    {
        struct node* last=head;
		struct node *pre=NULL;
    while(last->link!=head)
    { 
		pre=last;
		last=last->link;
    }
	pre->link=NULL;
    del=last->data;
    free(last);
    last=NULL;
    return del;
    }
}
void insert_middle(int item,int pos)
{
	int i;
	struct node *temp;
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
		if(newnode!=NULL)
		{
			newnode->data=item;
			newnode->link=NULL;
			temp=head;
			for(i=2;i<pos-1;i++)
			{
				temp=temp->link;
				if(temp==NULL)
					break;
			}
			if(temp!=NULL)
			{
				newnode->link=temp->link;
				temp->link=newnode;
			}
			else
			{
				printf("cannot insert data\n");
			}
		}
}