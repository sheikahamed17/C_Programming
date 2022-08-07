#include<stdio.h>
int add(int a,int b)
{
    int sum=0;
    sum = a+b;
    return sum;
}
void main()
{
    int x,y,r;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    r = add(x,y);
    printf("Result = %d",r);
}

