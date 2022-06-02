#include<iostream>
using namespace std;
class employee
{
    private:
    string name;
    int empno;
    float salary;
    public:
    void getdetails()
    {
        cout<<"\nEnter the name";
        cin>>name;
        cout<<"\nEnter the empno";
        cin>>empno;
        cout<<"\nEnter the salary";
    }
void printdetails()
{
    cout<<"\nThe name is"<<name;
    cout<<"\nthe emplyee number is"<<empno;
    cout<<"\nThe salary of the employee is"<<salary;
}
};
int main()
{
    employee e[10];
    int i=0;
    char choice;
    do
    {
        cout<<"enter the employee number:"<<i+1;
        e[i++].getdetails();
        cout<<"Enter another (y/n)!:";
        cin>>choice;
    }while(choice!='n');
    for (int j=0;j<i;j++)
    {
        cout<<"\nEmploy Number"<<j+1<<endl;
        e[j].printdetails();
        return 0;
       
    }
}