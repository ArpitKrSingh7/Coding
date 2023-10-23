// Chef and Marie are two friends. 
// One day Marie read an interesting article about the Fibonacci Sequence
// and decided to give Chef a task of implementing it. 
// But she decided to give it a little twist and came up
// with the Tribonacci Sequence. 
// The Tribonacci series is defined as follows:
// T(0) = 0
// T(1) = 1
// T(2) = 1
// Tn+3 = Tn+2 + Tn+1 + Tn for n >= 0.
// non−negative integer N (N >= 0 and N <= 30), return the Nth Tribonacci Number, else return -1.



#include <stdio.h>

int main(void) {
    int T,N;
    scanf("%d",&T);
    for (;T>0;T--)
    {
        scanf("%d",&N);
        if(N==0)
        printf("0");
        else if (N==1)
        printf("1");
        else if (N==2)
        printf("1");
        
        else if (N>=3 && N<=30)
        {
            int a=0,b=1,c=1,d=0;
            for(int i=3;i<=N;i++)
            {
                d=a+b+c;
                a=b;
                b=c;
                c=d;
            }
            printf("%d\n",d);
        
        }
        else
        {
            printf("-1");
        }
        
    }
	return 0;
}

