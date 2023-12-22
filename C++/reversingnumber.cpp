#include <iostream>
using namespace std;

int main()
{
    int n,x,rev=0,i=1;
    cout<<"Enter the number : ";
    cin>>n;
    x=n;
    n=0;

while(x!=0)
{
    n = n * 10 + x%10;
    x=x/10;
}

cout<<"Reverse of the given number is "<<n;
}