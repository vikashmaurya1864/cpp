#include<iostream>
using namespace std;

int main(){

    cout<<"enter three number"<<endl;
    cout<<"find the max value"<<endl;
    int a, b, c;
    cin>>a>>b>>c;
    if(a>b) {
        if(a>c) {
        cout<<"a is greater value  "<<a;
        }
        else{
         cout<<"c is a greater number  "<<c;
        }
    }
    else{
        if(b>c){
            cout<<"b is greater valuer "<<b;
        }
        else {
            cout<<"c is greater value "<<c;
        }
    }
    return 0;

}