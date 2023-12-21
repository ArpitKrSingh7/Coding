#include <stdio.h>
int strlent(char a[])
{
    int i;
    for(i=0;a[i]!='\0';i++);
    return i;
}

int palindrome (char a[])
{
    int i,j=0;
    int x = strlent(a);
    char b[x];
    for(i=0;i<x;i++)
    {
        b[i]=a[x-i-1];
    }

    for(i=0;i<x;i++)
    {
        if(b[i]==a[i])
        {
            j++;
        }
    }

    if(j==x)
    {
        return 1;
    }

    else 
    {
        return 0;
    }
}
void main ()
{
    
    char a[100];
    int b[100],i,j;
    scanf("%s",a);
    int x = strlent(a);
    for(i=0;i<x-1;i++)
    {
        for(j=0;j<x;j++)
        {
            
        }
    }

    // int y = palindrome(a);

    // if(y==1)
    // {
    //     printf("palindrome");
    // }

    // else
    // {
    //     printf("Not a palindrome");
    // }



}