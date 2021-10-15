#include<iostream>
using namespace std;
struct point
{
    int x=0;
    int y=1;

};
int main()
{
    struct point p1;
    cout<<"value of x acces by "<<p1.x<<endl;
    cout<<"value of u acces by "<<p1.y<<endl;
    //going to intilize anothe of the x and y;
    p1.x=200;
    p1.y=800;
    cout<<"new struct value oof x and y"<<p1.x<<" "<<p1.y<<endl;
    return 0;
}