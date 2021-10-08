#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cout<<"enter your two number;\n";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"you swap value is here "<<a<<"  "<<b<<endl;
}