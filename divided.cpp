#include<iostream>
using namespace std;

int divided(int a,int b){
    int c;
    c=a/b;
    return c;
}
int main(){
    int a,b;
    cout<<"i am going to dived two by fuction call \n enter you number"<<endl;
    cin>>a>>b;
    cout<<"this is your result "<<divided(a,b)<<endl;
}