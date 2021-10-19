#include<iostream>
using namespace std;

int main(){
    int arr[4];    //taking array
    // we taking we value inside arry we help of loop
    for ( int i=0;i<5; i++)
    {
        cout<<"enter your "<<i+1<<"  number here"<<endl;
        cin>>arr[i];
    }
    // we are going to print all number with the help
    for( int j=0;j<5; j++)
    {
        cout<<"your " <<j+1<<" is here  "<<arr[j]<<endl;
    }
}