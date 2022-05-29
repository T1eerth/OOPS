#include<iostream>
using namespace std;
class base
{   public:
    virtual void fun() //so if i not write virtual then the th efunction of the derived class will be printed
    {
        cout<<"display base";
    }  
};
class derived:public base
{   
    public:
    void fun()
    {
        cout<<"Display derived";

    }
};
int main()
{
    derived d;
    base *ptr=&d;
    ptr->fun();
}