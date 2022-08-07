#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("\nFirst no. : %d \nSecond no. : %d",a,b);
    temp =a;
    a = b;
    b = temp;
    printf("\nSwapped :");
    printf("\nFirst no. : %d \nSecond no. : %d",a,b);
}
