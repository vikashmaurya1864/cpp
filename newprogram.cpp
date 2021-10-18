#include<iostream>
using namespace std;
class lpu
{
    public:
    int id;
    string munna;
    //we going to create fuction of outside of fuction
    void printfuction();
    
    void setfuction()
    {
        cout<<"print the value of "<<id<<endl;
    } 

};
//definition of printname using scope resolution operator
void lpu::printfuction()
{
    cout<<"the value of string is here"<<munna<<endl;
}
int main(){
    lpu obj;
    obj.id=12114311;
    obj.munna="bitch";
    obj.setfuction();
    obj.printfuction();
    return 0;
}