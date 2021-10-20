#include<iostream>
using namespace std;
//i am going swap each other
void swap(int* a , int*  b)
{    
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int sum(int a, int b)
{  
    int c= a+b;
    return c;
}
int main()
{
  int x,y;
  cout<<"give two numbers please"<<endl;
  cin>>x>>y;
  //we are going to fuction call here
  cout<<"sum is here "<<sum(x,y)<<endl;
  cout<<"swap is here " <<x<< " "<<y<< " don't work with swap"<<endl;
  swap(&x,&y);
  cout<<"after swap fuction call "<<x<<" "<<y<<endl;  
}