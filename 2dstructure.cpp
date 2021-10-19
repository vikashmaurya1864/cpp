#include<iostream>
using namespace std;

struct point{
    
    int x,y; //we are declare  inside struct call
};
int main()
{
    struct point p1 ={ 8,9};
    cout<<"value of x and y  "<<p1.x<<" "<<p1.y<<endl;
    cout<<"we are going to change value of y here all is public "<<endl;
    p1.y=89;
    cout<<p1.y<<endl;
}