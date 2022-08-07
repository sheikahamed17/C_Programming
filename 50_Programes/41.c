#include<stdio.h>
void main()
{
    int a,fact=1,i=1;
    printf("Enter the number to find factorial : ");
    scanf("%d",&a);
    while(i<=a)
    {
        fact *= i;
        i++;
    }
    printf("\nFactorial of %d is %d",a,fact);
}
