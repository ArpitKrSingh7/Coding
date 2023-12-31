#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int N[n],max1,max2;
    for(i=0;i<n;i++)
    {
        cin>>N[i];
    }

    max1=max2=N[0];

    for(i=0;i<n;i++)
    {
        if(max1<N[i])
        {
            max2=max1;
            max1=N[i];
        }
    }
    cout<<"Max element is "<<max1<<endl;

    cout<<"Second max element is "<<max2;
}