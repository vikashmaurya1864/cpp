#include<iostream>
using namespace std;

int main()
{
    string str =" geeksforgeeks is great website is my opionion";
    //upper section is intiallzation of string its great  
    cout<< "the intial string is like this i don't it's work but let's try"<<endl;
    cout<<str<<endl;

    //resizeing string using resize(3)
    str.resize(33);
    cout<<"str.resize operation done here "<<endl;
    cout<<str;
    //we are going to capacity operation done here
    cout<<"it show capacity of str"<<endl;
    cout<<str.capacity()<<endl;
    cout<<"we are goint to implement str.lenght() of string"<<endl;
    cout<<str.length()<<endl;
    //Decreasing the capacity of string using str.shrink_to_fit()
    str.shrink_to_fit();
    cout<<"this str.shrink_to_fit() "<<str.capacity()<<endl;
    return 0;   


}