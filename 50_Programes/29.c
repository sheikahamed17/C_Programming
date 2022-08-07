#include<stdio.h>
int add(int a,int b)
{
    printf("Result = %d",a+b);
}
void main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    add(x,y);
}

