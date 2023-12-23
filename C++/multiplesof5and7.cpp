#include <iostream>
using namespace std;

int main()
{
    int n,x=0;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1;;i++)
    {
        if(i%5 == 0)
        {
            if(i%7 == 0)
            {
                printf("%d\n",i);
                x++;

                if(x==n)
                break;
            }

        }
    }
}
