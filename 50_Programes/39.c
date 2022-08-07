#include<stdio.h>
void main()
{
    int a,i,m=0,f=0;
    printf("Enter the number to check prime: ");
    scanf("%d",&a);
    m=a/2;
    for(i=2;i<=m;i++)
    {
        if(a%i==0)
        {
            printf("Number is not prime");
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("Number is prime");
    }
 }
