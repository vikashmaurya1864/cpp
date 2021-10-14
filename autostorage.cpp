#include<iostream>
using namespace std;

int main()
{
  void storage(void);
  storage();
  storage();
  storage();

}
void storage ()
{
    auto b = 0;
    cout<<++b<<endl;
}