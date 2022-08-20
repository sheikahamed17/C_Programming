o#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;

void insertion_beginning()
{
   struct node *t;
   int item;
   t = (struct node *)malloc(sizeof(struct node));
   if(t == NULL)
   {
       printf("\nOVERFLOW");
   }
   else
   {
        printf("\nEnter Item value");
        scanf("%d",&item);

        if(head==NULL)
        {
            t->next = NULL;
            t->prev=NULL;
            t->data=item;
            head=t;
        }
        else
        {
            t->data=item;
            t->prev=NULL;
            t->next = head;
            head->prev=t;
            head=t;
        }
        printf("\nNode inserted\n");
    }
}
void insertion_last()
{
    struct node *t,*p;
    int item;
    t = (struct node *) malloc(sizeof(struct node));
    if(t == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value");
        scanf("%d",&item);
        t->data=item;
        if(head == NULL)
        {
            t->next = NULL;
            t->prev = NULL;
            head = t;
        }
        else
        {
            p = head;
            while(p->next!=NULL)
            {
                p = p->next;
            }
            p->next = t;
            t ->prev=p;
            t->next = NULL;
        }
    }
    printf("\nNode inserted\n");
}
void deletion_beginning()
{
    struct node *t;
    if(head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nNode deleted\n");
    }
    else
    {
        t = head;
        head = head -> next;
        head -> prev = NULL;
        free(t);
        printf("\nNode deleted\n");
    }
}
void deletion_last()
{
    struct node *t;
    if(head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nNode deleted\n");
    }
    else
    {
        t = head;
        if(t->next != NULL)
        {
            t = t -> next;
        }
        t -> prev -> next = NULL;
        free(t);
        printf("\nNode deleted\n");
    }
}
void display()
{
    struct node *t;
    printf("\n Printing values...\n");
    t = head;
    while(t != NULL)
    {
        printf("%d\n",t->data);
        t=t->next;
    }
}

void main ()
{
    int choice =0;
    while(choice != 6)
    {
        printf("\n*********Main Menu*********\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("\n1.Insert in beginning\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Show\n6.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
            insertion_beginning();
            break;
            case 2:
                    insertion_last();
            break;
            case 3:
            deletion_beginning();
            break;
            case 4:
            deletion_last();
            break;
            case 5:
            display();
            break;
            case 6:
            exit(0);
            break;
            default:
            printf("Please enter valid choice..");
        }
    }
}
