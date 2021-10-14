#include<iostream>
using namespace std;

int main()
{
    int a[2][2]={{5,5},{3,5}};
    int b[2][2]={{3,4},{3,4}};
    int c[2][2];
    c[0][0] =a[0][0]+ b[0][0];
    c[0][1] =a[0][1]+ b[0][1];
    c[1][0] =a[1][0]+ b[1][0];
    c[1][1] =a[1][1]+ b[1][1];
    cout<<c[0][0];
    cout<<c[0][1]<<endl;
    cout<<c[1][0];
    cout<<c[1][1]<<endl;
}