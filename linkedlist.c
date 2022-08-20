#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node* next;
};
struct node *head,*t,*p;

void addbeginning()
{
    t = malloc(sizeof(struct node));
    if(t == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("Enter a number to insert :");
        scanf("%d",&t->data);
        t->next = head;
        head = t;
        printf("\nNode inserted");
    }
}

void addend()
{
    t = malloc(sizeof(struct node));
    if(t == NULL  )
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("Enter a number to insert :");
        scanf("%d",&t->data);
        if(head == NULL)
        {
            t->next = NULL;
            head = t;
            printf("\nNode inserted");
        }
        else
        {
            p = head;
            while(p->next != NULL)
            {
                p = p->next;
            }
            p->next = t;
            t->next = NULL;
            printf("\nNode inserted");
        }
    }
}

void specificadd()
{
    int i,loc;
    t = malloc(sizeof(struct node));
    if(t == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter element value");
        scanf("%d",&t->data);
        printf("\nEnter the location after which you want to insert ");
        scanf("\n%d",&loc);
        p = head;
        for(i=0;i<loc;i++)
        {
            p = p->next;
            if(p == NULL)
            {
                printf("\nCan't insert\n");
                return;
            }

        }
        t ->next = p ->next;
        p ->next = t;
        printf("\nNode inserted");
    }
}

void begin_delete()
{
    if(head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        t = head;
        head = t->next;
        free(t);
        printf("\nNode deleted from the beginning ...\n");
    }
}

void last_delete()
{
    if(head == NULL)
    {
        printf("\nList is empty");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ...\n");
    }

    else
    {
        t = head;
        while(t->next != NULL)
        {
            p = t;
            t = t ->next;
        }
        p->next = NULL;
        free(t);
        printf("\nDeleted Node from the last ...\n");
    }
}

void specific_delete()
{
    int loc,i;
    printf("\n Enter the location of the node after which you want to perform deletion \n");
    scanf("%d",&loc);
    t = head;
    for(i=0;i<loc;i++)
    {
        p = t;
        t = t->next;

        if(t == NULL)
        {
            printf("\nCan't delete");
            return;
        }
    }
    p->next = t ->next;
    free(t);
    printf("\nDeleted node %d ",loc+1);
}

void search()
{
    int item,i=0,flag;
    t = head;
    if(t == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d",&item);
        while (t!=NULL)
        {
            if(t->data == item)
            {
                printf("item found at location %d ",i+1);
                flag=0;
            }
            else
            {
                flag=1;
            }
            i++;
            t = t -> next;
        }
        if(flag==1)
        {
            printf("Item not found\n");
        }
    }

}

void display()
{
    if(t == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        t = head;
        printf("\nPrinting values . . . . .\n");
        while (t->next != NULL)
        {
            printf("\n%d",t->data);
            t = t -> next;
        }
        printf("\n%d",t->data);
    }
}

void main ()
{
    int ch =0;
    while(1)
    {
        printf("\n\n*********Main Menu*********\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("\n1.Insert in beginning\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&ch);
        switch(ch)
        {
            case 1:
                addbeginning();
                break;
            case 2:
                addend();
                break;
            case 3:
                specificadd();
                break;
            case 4:
                begin_delete();
                break;
            case 5:
                last_delete();
                break;
            case 6:
                specific_delete();
                break;
            case 7:
                search();
                break;
            case 8:
                display();
                break;
            case 9:
                exit(0);
                break;
            default:
                printf("Please enter valid choice..");
        }
    }
}


