#include<stdio.h>
void main()
{
    int a,r=0,temp;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(a!=0)
    {
        temp=a%10;
        r=r*10+temp;
        a/=10;
    }
    printf("Reversed Number: %d",r);
}
