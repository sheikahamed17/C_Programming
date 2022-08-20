#include <stdio.h>

int main()
{
    int a[10][2], b[10][2], c[10][2];
    int m, n;
    printf("Enter number of terms for A:");
    scanf("%d", &m);
    printf("Enter the equation of A:");
    for(int i = 0; i<m; i++)
    {
        scanf("%d", &a[i][1]);
        scanf("%d", &a[i][2]);
    }
    for(int i = 0; i<m; i++)
    {
        if(i==0)
        {
            if(a[i][2]>0)
            {
                if(a[i][1]==1)
                    printf("x^%d", a[i][2]);
                else
                    printf("%dx^%d", a[i][1], a[i][2]);
            }
            else
            {
                printf("%d", a[i][1]);
            }
            }
        else
        {
            if(a[i][2]>0)
            {
                if(a[i][1]==1)
                    printf("+x^%d", a[i][2]);
                else
                    printf("+%dx^%d", a[i][1], a[i][2]);
            }
            else
            {
                printf("+%d", a[i][1]);

            }
        }
    }
    printf("\n");
    printf("Enter number of terms for B:");
    scanf("%d", &n);
    printf("Enter the equation of B:");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &b[i][1]);
        scanf("%d", &b[i][2]);
    }
    for(int i = 0; i<n; i++)
    {
        if(i==0)
        {
            if(b[i][2]>0)
            {
                if(b[i][1]==1)
                    printf("x^%d", b[i][2]);
                else
                    printf("%dx^%d", b[i][1], b[i][2]);
            }
            else
            {
                printf("%d", b[i][1]);
            }
            }
        else
        {
            if(b[i][2]>0)
            {
                if(b[i][1]==1)
                    printf("+x^%d", b[i][2]);
                else
                    printf("+%dx^%d", b[i][1], b[i][2]);
            }
            else
            {
                printf("+%d", b[i][1]);

            }
        }
    }
    int i=0;
    int j=0;
    int k=0;
    while (m>0 && n>0)
    {
        if (a[i]==b[j])
        {
            c[k+1]= a[i+1] + b[j+1];
            c[k]=a[i];
            m--;
            n--;
            i+=2;
            j+=2;
        }
        else if (a[i]>b[j])
        {
            c[k+1]=a[i+1];
            c[k]=a[i];
            m--;
            i+=2;
        }
        else
        {
            c[k+1]=b[j+1];
            c[k]=b[j];
            n--;
            j+=2;
        }
        k+=2;
    }
    while (m>0)
    {
        c[k+1]=a[i+1];
        c[k] = a[i];
        k+=2;
        i+=2;
        m--;
    }
    while (n>0)
    {
        c[k+1]=b[j+1];
        c[k]=b[j];
        k+=2;
        j+=2;
        n--;
    }
    int k1=0;
    if (c[k1+1]==1)
    printf("x^%d", c[k1]);
    else
    printf("%dx^%d", c[k1+1],c[k1]);
    k1+=2;
    while (k1<k)
    {
        if (c[k1+1]==1)
        printf("+x^%d", c[k1]);
        else
        printf("+%dx^%d", c[k1+1], c[k1]);
        k1+=2;
    }
}
