#include<iostream>
using namespace std;

int main(){
    cout<<"enter your number:";
    int n;
    cin>>n;

    int sum=0;
    int i;
    for(i=1; i<=n;i++){
        sum=sum+i;
        cout<<sum<<endl; 
    }
    return 0;
}