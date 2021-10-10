#include<iostream>
using namespace std;

int main()
{
  int i, r,j=0;
  cout<<"enter you number"<<endl;
  cin>>i;
  while(i!=0)
  {
      r=i%10;
      j=j*10+r;
      i=i/10;

  }
  cout<<"reverse number is "<<j<<endl;

}