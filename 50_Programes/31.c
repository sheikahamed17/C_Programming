#include<stdio.h>
void main()
{
    int i,sum=0,a[11];
    printf("Enter 10 numbers : \n");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("Sum = %d",sum);
}
