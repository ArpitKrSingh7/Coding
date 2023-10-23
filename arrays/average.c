#include <stdio.h>
int main ()
{
    int a;
    float c=0;
    printf("How many numbers you have? : ");
    scanf("%d",&a);

    float b[a];
    printf("Enter the numbers!\n");
    for (int i=0;i<a;i++)
    {
        scanf("%f",&b[i]);
        c=c+ b[i];
    }
    printf("%.2f is the average of given numbers!",c/a);



}