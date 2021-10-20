#include<iostream>
using namespace std;

int main()
{
    int a=56;
    int *b= &a;
    //both are same thing here i think b=&a;
    cout<<"this is addres of a wiht help of &a  "<<&a<<endl;
    cout<<"this is again address of b with the help of "<< b <<endl;
    
    //derefernce opatator value at 
    cout<<"the value of b is help of *b  "<< *b <<endl; 
    //we are going to store to addres of pointer with the help of **
    int**c;
    c=&b;
    cout<<"we are going to print addres of pointer b with the help of c "<< c<<endl;
    cout<<"we are going to print addres of pointer *b  with the help of  "<<&b<<endl;
    //we want value of these varible with the help of c and d
    //i think this reference value 
    cout<<"the value of a is with the help of c "<<**c<<endl;
    cout<<"the value of a is with the help of b " <<*b<<endl;

}