#include<iostream>
using namespace std;

int main()
{
    int m, n, r=0;
    cout<<"enter the no"<<endl;
    cin>>m;
    while(m!=0)
    {
        n=m%10;
        r=r+n;
        m=m/10;

    }
    cout<<"your sum is "<<r<<endl;

}