//exten storage class exits till the end and it is global varible
#include<iostream>
using namespace std;

int a=0;
int main()
{
    extern int a;
    //we are going to call fuction ok how to call fuction
    void sort(void);
    sort();
    sort();
    sort();
    sort();

}
void sort()
{ 

    cout<<++a<<endl;

}
// here we look that extern storage type is exits till 
//and it also global varible so it can call anywher
//another thing is that we have to call int varible outside of everything;
