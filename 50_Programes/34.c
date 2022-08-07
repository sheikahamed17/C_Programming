#include<stdio.h>
#include<string.h>
void main()
{
    char c[50],i,C=0;
    printf("Enter a string : ");
    gets(c);
    while(c[i] !='\0')
    {
        C++;
        i++;
    }
    printf("Length = %d",C);
}
