#include<iostream>
using namespace std;

class vikash{
    public:
    string dog="khaatam";
    void printfuction(){
        cout<<"this is goint to print "<< dog <<"fuction is here"<<endl;
    }
    void getfuction(){
        cout<<"my name is vikash singh maurya you know "<<endl;
    }
};
int main(){
    vikash munna;
    munna.printfuction();
    munna.getfuction();

    cout<<munna.dog<<endl;
}