#include<iostream>
using namespace std;
class base
{   public:
    void display()
    {
        cout<<"display base"<<endl;
    }
};
class derived:public base
{   public:
    void display()
    {
        cout<<"display derived"<<endl;
    }
};
int main()
{
    derived d;
    d.display();
}

