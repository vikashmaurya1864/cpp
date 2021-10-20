#include<iostream>
using namespace std;

int subtraction( int, int);
void g(void);
int main(){
    int num1,num2;
    cout<<"enter you two number and subtraction on it"<<endl;
    cin>>num1>>num2;
    cout<<"your substraction is here "<<subtraction(num1,num2)<<endl;
    for(int i=1; i<=5; i++){
    cout<<i <<" ";
    g();
    }

}
int subtraction(int a, int b){
    
    int c = a-b;
    return c;  
}
void g()
{
    cout<<"  hello, Good morning"<<endl;
}