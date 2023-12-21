#include <stdio.h>
#include <string.h>
void strreverse(char a[],int b);
int strlent(char b[]);
int main ()
{
char string[1000],stringrev[1000];

printf("Enter the string :- ");
scanf("%[^\n]s" , string);
int x;
x = strlent(string);
strreverse (string,x);
}
int strlent(char b[])
{
    int i=0,j=0;
    while (b[i]!='\0')
    {
        i++;
        j++;
    }

    return j;
}
void strreverse (char a[],int b)
{
int i=0,j=b-1;
char c[b];
for (i=0;i<b;i++)
{
    c[j] = a[i];
    j--;
}

c[b]='\0';
printf("%s",c);
}