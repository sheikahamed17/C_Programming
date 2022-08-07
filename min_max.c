#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n],i,max,min;
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min = max = a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min = a[i];
        }
        if(max<a[i])
        {
            max = a[i];
        }
    }
    printf("Maximum = %d \nMinimum = %d",max,min);
}
