#include<iostream>
using namespace std;
class base
{
    public:
    void fun1()
    {
        cout<<"fun 1 of base";
    }
};
class derived:public base
{
    void fun2()
    {
        cout<<"fun2 of derived class";
    }
};
int main()
{
    derived d;
    base *ptr=&d;
    ptr->fun1();
    //ptr->fun2() this is not possible the pointer will return the function prent in the base class only
}