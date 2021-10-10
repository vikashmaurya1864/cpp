#include<iostream>
using namespace std;

int main()
{
    int n=0,m=1,j,k;
    cout<<"enter your nuber\n";
    
    for(int i=1; i<=10;i++)
    {
        j=n+m;
        n=m;
        m=j;
        cout<<j<<endl;
    }
}