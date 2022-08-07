#include<stdio.h>
int a[50],max,min;
int minmax(int,int);
int minmax( l, h)
{
    int m,min1,min2,max1,max2;
    if(l<=h)
    {
        if(l==h)
        {
            min = max = a[l];
        }
        else if(l+1 == h)
        {
            if(a[l]>a[h])
            {
                min = a[h];
                max = a[l];
            }
            else
            {
                min = a[l];
                max = a[h];
            }
        }
        else
        {
                m = (l+h)/2;
                minmax(l,m);
                min1 = min;
                max1 = max;
                minmax(m+1,h);
                min2 = min;
                max2 = max;
                if(min1>min2)
                {
                    min = min2;
                }
                else
                {
                    min = min1;
                }
                if(max1>max2)
                {
                    max = max1;
                }
                else
                {
                    max = max2;
                }
        }
    }
}

void main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int i;
    printf("Enter the array elements: \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l,h;
    l=1;
    h = n;
    minmax(l,h);
    printf("\nMaximum = %d \tMinimum = %d",max,min);
}
s
