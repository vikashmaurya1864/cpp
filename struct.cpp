#include <iostream>
using namespace std;
struct student
{
    string name;
    int date;
    string fathername;
    string address;
};
int main()
{
    struct student m;
    cout<<"we are going to take \n your name \n fathername\n date \n address"<<endl;
    cin>>m.name;
    cin>>m.fathername;
    cin>>m.date;
    cin>>m.address;
    cout<<m.name<<" "<<m.fathername<<" "<<m.date<<"  "<<m.address<<endl;
}