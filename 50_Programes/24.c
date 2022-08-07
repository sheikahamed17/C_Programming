#include<stdio.h>
void main()
{
    int a,b,i,sum=0;
    printf("Enter the range(a,b) : ");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2 ==0)
        {
            printf("%d\t",i);
        }
    }
}
