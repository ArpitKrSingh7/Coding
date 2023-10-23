#include <stdio.h>
int main ()
{
    int a,b,HCF=0,LCM,i;
    scanf("%d %d",&a,&b);

    for (i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            if(HCF<=i)
            {
                HCF=i;
            }
        }
    }

    for(i=1;;i++)
    {
        if(i%a==0 && i%b==0)
        {
            LCM = i;
            break;
        }
    }
    printf("LCM : %d\n",LCM);

    printf("HCF : %d",HCF);
}