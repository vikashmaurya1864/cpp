#include<iostream>
using namespace std;

class lpu
{   
    public:
    int x,y;
    string name;
    lpu()//default constructor
    {
        cout<<"first time i am using constructor i run automatically"<<endl;
    }
    lpu(int x, int y)//parameterized constructor this
    {
        cout<<"sum of given to number is "<<x+y<<endl;
    }
    lpu(string z)
    {
      name=z;
      cout<<"print the my name my "<<name<<endl;
    }
};
int main()
{   lpu obj;
    lpu obj1(11,15);
    lpu obj2("munna");
    return 0;
}