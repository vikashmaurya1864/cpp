#include<iostream>
using namespace std;

int main()
{   int a,b,c;
    cout<<"enter two number is "<<endl;
    cin>>a>>b;
    void sum(int, int);
    sum(a,b);

}

void sum(int x, int y)
{
    int z;
    z=x+y;
    cout<<"sum is two number is "<<z<<endl;
}