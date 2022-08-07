#include<stdio.h>
void main()
{
	 int n1,n2,hcf,lcm,i;
	 printf("Enter two number: ");
	 scanf("%d %d",&n1,&n2);
	 for(i=1;i<=n1;i++)
	 {
		  if(n1%i==0 && n2%i==0)
		  {
		   	hcf=i;
		  }
	 }
	 lcm = (n1*n2)/hcf;
	 printf("HCF = %d \nLCM = %d", hcf, lcm);
}
