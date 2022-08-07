#include<stdio.h>
void main()
{
    int i;
    printf("Using for loop:\n");
    for(i=1;i<=100;i++)
    {
        printf("\t%d",i);
    }
    printf("\nUsing while loop:\n");
    i=1;
    while(i<=100)
    {
        printf("\t%d",i);
        i++;
    }
    printf("\nUsing do while loop:\n");
    i=1;
    do
    {
        printf("\t%d",i);
        i++;
    }while(i<=100);
}
