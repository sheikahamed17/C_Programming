#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void beginsert()
{
    struct node *t,*p;
    int item;
    t = (struct node *)malloc(sizeof(struct node));
    if(t == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter the node data?");
        scanf("%d",&item);
        t -> data = item;
        if(head == NULL)
        {
            head = t;
            t -> next = head;
        }
        else
        {
            p = head;
            while(p->next != head)
                p = p->next;
            t->next = head;
            p -> next = t;
            head = t;
        }
        printf("\nnode inserted\n");
    }

}
void lastinsert()
{
    struct node *t,*p;
    int item;
    t = (struct node *)malloc(sizeof(struct node));
    if(t == NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        printf("\nEnter Data?");
        scanf("%d",&item);
        t->data = item;
        if(head == NULL)
        {
            head = t;
            t -> next = head;
        }
        else
        {
            p = head;
            while(p -> next != head)
            {
                p = p -> next;
            }
            p -> next = t;
            t -> next = head;
        }

        printf("\nnode inserted\n");
    }

}

void begin_delete()
{
    struct node *t;
    if(head == NULL)
    {
        printf("\nUNDERFLOW");
    }
    else if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
    }

    else
    {   t = head;
        while(t -> next != head)
            t = t -> next;
        t->next = head->next;
        free(head);
        head = t->next;
        printf("\nnode deleted\n");

    }
}
void last_delete()
{
    struct node *t, *pret;
    if(head==NULL)
    {
        printf("\nUNDERFLOW");
    }
    else if (head ->next == head)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");

    }
    else
    {
        t = head;
        while(t ->next != head)
        {
            pret=t;
            t = t->next;
        }
        pret->next = t -> next;
        free(t);
        printf("\nnode deleted\n");

    }
}

void search()
{
    struct node *t;
    int item,i=0,flag=1;
    t = head;
    if(t == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d",&item);
        if(head ->data == item)
        {
        printf("item found at location %d",i+1);
        flag=0;
        }
        else
        {
        while (t->next != head)
        {
            if(t->data == item)
            {
                printf("item found at location %d ",i+1);
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
            i++;
            t = t -> next;
        }
        }
        if(flag != 0)
        {
            printf("Item not found\n");
        }
    }

}

void display()
{
    struct node *t;
    t=head;
    if(head == NULL)
    {
        printf("\nnothing to print");
    }
    else
    {
        printf("\n printing values ... \n");

        while(t -> next != head)
        {

            printf("%d\n", t -> data);
            t = t -> next;
        }
        printf("%d\n", t -> data);
    }

}

void main ()
{
    int ch =0;
    while(ch != 7)
    {
        printf("\n*********Main Menu*********\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("\n1.Insert in begining\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Search for an element\n6.Show\n7.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&ch);
        switch(ch)
        {
            case 1:
                beginsert();
                break;
            case 2:
                lastinsert();
                break;
            case 3:
                begin_delete();
                break;
            case 4:
                last_delete();
                break;
            case 5:
                search();
                break;
            case 6:
                display();
                break;
            case 7:
                exit(0);
                break;
            default:
                printf("Please enter valid choice..");
        }
    }
}
