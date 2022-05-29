#include<iostream>
using namespace std;
class car
{
    public:
 void start()
{
    cout<<"car started"<<endl;
}  
   
};
class innova : public car
{
    void satrt()
    {
        cout<<"innova started";
    }
};
class swift : public car
{
    void satrt()
    {
        cout<<"swift started"<<endl;
    }
};
int main()
{
    car *p=new innova();
    p->start();
    p=new swift();
    p->start();

}