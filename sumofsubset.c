#include<stdio.h>
int w[]={3,4,7};
int m=7;
int x[]={0,0,0};
void sos(int s, int k, int r)
{
    //left child
    x[k] = 1;
    if(s+w[k]==m)
    {
        for(int i=0;i<=k;i++)
        {
            printf("%d ",x[i]);
        }
    }
    else if(s+w[k]+w[k+1]<=m)
    {
        sos(s+w[k],k+1,r-w[k]);
    }

    //right child
    if((s+r-w[k]>=m) && (s+w[k+1]<=m))
    {
        x[k] = 0;
        sos(s,k+1,r-w[k]);
    }
}

int main()
{
    sos(0,1,14);
}
