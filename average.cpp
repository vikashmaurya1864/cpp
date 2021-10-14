//i am going to make average calculator with help of arrays
#include<iostream>
using namespace std;

int main()
{
    int a[5], sum=0;
    for ( int i=0; i<=4; i++)
    {    
        cout<<"enter you number please"<<endl;
        cin>>a[i];
        sum=sum+a[i];
        cout<<" step by step sum is here"<<sum<<endl;
    }
    cout<<"this is averge is "<<sum/5<<endl;
}