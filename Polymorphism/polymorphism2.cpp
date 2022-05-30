#include<iostream>
using namespace std;
class shape
{
    public:
    virtual float area()=0;
    virtual float perimeter()=0;
};
class rectangle:public shape
{
    private:
    float length;
    float breadth;
    public:
    rectangle(int l=1,int b=1)
    {
        length=l;
        breadth=b;
    }
    float area()
    {
        return length*breadth;
    }
    float perimeter()
    {
        return 2*(length*breadth);
    }
};
class circle:public shape
{
    private:
    float radius;
    public:
    circle(int r=1)
    {
        radius=r;
    }
     float area()
    {
        return 3.14*radius*radius;
    }
    float perimeter()
        {   
            return 2*3.14*radius;
        }
    
};
int main()
{
    shape *s=new rectangle(10,5);
    cout<<"the area of the rectangle is:"<<s->area()<<endl;
    cout<<"the perimeter of the rectangle is:"<<s->perimeter()<<endl;
    s=new circle(8);
    cout<<"the area of the circle is:"<<s->area()<<endl;
     cout<<"the perimeter of the circle is:"<<s->perimeter()<<endl;
}