#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;


    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"X : "<<x<<endl<<"Y : "<<y;
}