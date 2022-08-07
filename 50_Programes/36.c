#include<stdio.h>
void main()
{
    char s[100],r[100],l=0;
    int i=0;
    printf("Enter a string: ");
    scanf("%s",&s);
    while(s[i] != '\0')
    {
        l++;
        i++;
    }
    i=0;
    while(r[i] != '\0')
    {
        r[i] = s[l];
        i++;
        l--;
    }
    printf("Reversed string : %s",r);
}
