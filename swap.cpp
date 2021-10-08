#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"enter your two number;\n";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"you swap value is here "<<a<<"  "<<b<<endl;
}