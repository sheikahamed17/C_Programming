#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k,n,a[50],low,high,mid;
	clrscr();
	printf("enter the number of elements");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter the %d element \n",i);
		scanf("%d",&a[i]);
	}
	printf("enter the search key");
	scanf("%d",&k);
	low=1;
	high=n;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==k)
		{
			printf("found");
		}
		else if(a[mid]>k)
		{
			high=mid-1;
		}
		else if(a[mid]<k)
		{
			low=mid+1;
		}
	}
	if(low>high)
	{
		printf("not found");
	}
	getch();
}

