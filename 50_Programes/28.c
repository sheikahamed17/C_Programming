#include<stdio.h>
int add()
{
    int a,b,sum;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    sum = a+b;
    return sum;
}
void main()
{
    int r;
    r = add();
    printf("Result = %d",r);
}
