#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char c[100];
    int i,d=0;
    scanf(" %s",c);

    for(i=0;c[i]!=0;i++)
    {
        d++;
    }
     printf("%d\n",d);
    return 0;
}
