#include<stdio.h>
void main()
{
    int a,sum=0,n;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a>0)
    {
        n=a%10;
        sum=sum+n;
        a=a/10;
    }
    printf("Sum is=%d",sum);
}
