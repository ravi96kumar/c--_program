#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node1
{
    int data1;
    struct node* link1;
};
struct node1* head1=NULL;
struct node * head=NULL;
enum list{INSERT_F=1,DELETE_F,DISPLAY,INSERT_R,DELETE_R,EXIT,INSERT_M,DELETE_M,REVERSE,REVER_DISP};
void insert_f(int);
int delete_f();
void display();
void insert_r(int);
int delete_r();
int delete_r();
int insert_m(int);
int delete_m();
struct node* reverse();
void rever_disp(struct node*);
void copy();
int main()
{
    int ch,item,del=0;
    while(1)
    {
        printf("\n 1-insert_f\t 2-delete_f \t 3-display \t 4-insert_r \t 5-delete_r \t 6-exit \t 7-insert_m \t 8-delete_m \t 9-reverse \t 10-reverse_disp");
        printf("\n enter your choice=");
        scanf("%d",&ch);
        switch (ch)
        {
        case INSERT_F:
        {
            printf("\n enter the item=");
            scanf("%d",&item);
            insert_f(item);
        }
            break;
        case DELETE_F: 
        {
            del=delete_f();
            if(del==0)
            {

            }
            else
            {
            printf("\n deleted item is=%d",del);
            }
        }
        break;
        case DISPLAY: 
        {
            display();
        }
        break;
        case INSERT_R:  
        {
             printf("\n enter the item=");
            scanf("%d",&item);
            insert_r(item);
        }
        break;
        case DELETE_R: 
        {

            del=delete_r();
            if(del==0)
            {

            }
            else
            {
            printf("\n deleted item is=%d",del);
            }

        }
        break;
        case EXIT: 
        {
            exit(0);
        }
         break;
         case INSERT_M: 
         {
            printf("\n enter the item=");
            scanf("%d",&item);
            insert_m(item);
         }
         break;
         case DELETE_M: 
         {
            del=delete_m();
            if(del==0)
            {

            }
            else
            {
            printf("\n deleted item is=%d",del);
            }
         }
         break;
         case REVERSE: 
         {
        
           head= reverse();

         }
         break;
         case REVER_DISP:  
         {
            struct node* ptr=head;
            rever_disp(ptr);
         }
         break;
        default:
        {
            printf("\n enter valid choice");
        }
            break;
        }
    }
}
void insert_f(int item)
{
    struct node* temp=(struct node*)malloc(sizeof(struct  node));
    if(temp!=NULL)
    {
        temp->data=item;
        temp->link=head;
        head=temp;
    }
    else{
        printf("\n dynamic memory not created");
    }
}
int delete_f()
{
    int del=0;
    if(head==NULL)
    {
        printf("\n list is not available");
        return 0;
    }
    else
    {
       struct node *temp=head;
        del=temp->data;
        head=temp->link;
        free(temp);
        temp=NULL;
        return del;
    }
}
void display()
{ int count=0;
    struct node* temp=head;
    if(head==NULL)
    {
        printf("\n list is not available");
    }
    else
    {
    while(temp!=NULL)
    {count++;
        printf("\n%d",temp->data);
        temp=temp->link;
    }
    printf("\n%d",count);
    }
    copy(head,head1);
}
void insert_r(int item)
{
    struct node* temp=(struct node*)malloc(sizeof(struct  node));
    if(temp!=NULL)
    {
        if(head==NULL)
        {
            temp->data=item;
            temp->link=head;
             head=temp;
        }
        else
        {
        struct node* last=head;
    while(last->link!=NULL)
    { last=last->link;
    }
        last->link=temp;
        temp->data=item;
        temp->link=NULL;
    }
    }
    else{
        printf("\n dynamic memory not created");
    }

}
int delete_r()
{
    int del=0;
    if(head==NULL)
    {
        printf("\n list is not available");
        return 0;
    }
    else
    {
        struct node* last=head;
        struct node* prev=NULL;
    while(last->link!=NULL)
    {   prev=last;
        last=last->link;
    }
    prev->link=NULL;
    del=last->data;
    free(last);
    last=NULL;
    return del;
    }
}
int insert_m(int item)
{
    int count =0,pos;
    printf("\nenter the position to enter = ");
    scanf("%d",&pos);
    struct node* last=head;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    if(temp!=NULL)
    {
        if(head==NULL || pos==1)
        {
            temp->link=head;
             head=temp;
        }
        else
        {   
    while(count<pos-2)
    { last=last->link;
    count++;
    if( last->link==NULL )
    {
        printf("\n position higher than linked list size");
        return 0;
    }
    }
        temp->link=last->link;
        last->link=temp;
    }
    }
    else
    {
        printf("\n dynamic memory not created");
    }
    return 0;
}
int delete_m()
{
     int count =0,pos,del;
         struct node* ptr=head;
        struct node* prev=NULL;
    printf("\nenter the position to delete = ");
    scanf("%d",&pos);
    
        if(head==NULL)
        {
           printf("\n no linked list to delete");
        }
        else if (pos==1)
        {
           del= delete_f();
           /* head=last->link;
            del=last->data;
            free(last);
            last=NULL; */   
        }
        else
        {  
    while(ptr->link!=NULL && count<pos-1)
    {  count++;
         prev=ptr;
        // next=last->link;
        ptr=ptr->link;
          if( ptr->link==NULL )
    {
        printf("\n position higher than linked list size");
        return 0;
    }    
    }
   del=ptr->data;
     prev->link=ptr->link;
    free(ptr);
    ptr=NULL;
        }
        return del;
}
struct node* reverse()
{
    //struct node *prev, *current;
	/*if(head!=NULL)
    {
		prev = head;
		current = head->link;
		head = head->link;
		prev->link=NULL;
		while(head!=NULL)
		{
			head=head->link;
			current->link=prev;
			prev = current;
			current=head;
		 }
		 head=prev;
    }*/
     struct node* cur,*temp;
     cur=NULL;
     while(head!=NULL)
     {
        temp=head->link;
        head->link=cur;
        cur=head;
        head=temp;
     }
     return cur;
     
}
void rever_disp(struct node* ptr)
{
    if(ptr!=NULL)
    {
        rever_disp(ptr->link);
        printf("\n%d",ptr->data);
    }
}
void copy(struct node *q,struct node1 **p)
{
    printf("\ncopying into another linked list\n");
   if(q!=NULL)
   {
    (*p)=malloc(sizeof(struct node1));
    (*p)->data1=q->data;
    (*p)->link1=NULL;
    copy(q->link,&(*p)->link1);
   }
    struct node1*ptr=head1;
    printf("copying into ptr\n");
    while(ptr!=NULL)
    {
        printf("\n%d",ptr->data1);
        ptr=ptr->link1;
    }

}