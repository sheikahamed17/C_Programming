#include<stdio.h>
#include<math.h>
int x[10], a=0;
void NQueen(int k,int n)
{
    int i;
    for (i=1;i<=n;i++)
    {
        if(place(k,i)==1)
        {
            x[k] =i;
            if(k==n)
            {
                a++;
                for(i=1;i<=n;i++)
                {
                    printf("\nx[%d] = %d",i,x[i]);
                }
                printf("\n");
            }
            else
            {
                NQueen(k+1,n);
            }
        }
    }
}

int place(int k,int i)
{
    int j;
    for(j=1;j<=k-1;j++)
    {
        if((x[j]==i) || (abs(x[j]-i)== abs(j-k)))
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    int n;
    printf("Enter the number of queen: ");
    scanf("%d",&n);
    NQueen(1,n);
    printf("%d",a);
}
