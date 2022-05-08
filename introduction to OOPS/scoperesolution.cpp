#include<iostream>
using namespace std;
    class Rectangle
 {
private:
int length;
int breadth;
public:
Rectangle();
Rectangle(int l,int b);
Rectangle(Rectangle &r);
int getLength() {return length;}   //inline functions:- as they are in the class itself..
int getBreadth() {return breadth;}
void setLength(int l);
void setBredth(int b);
int area();
int perimeter();
bool isSquare();
~Rectangle();

};
int main()
{
  Rectangle r1(10,5);
  if (r1.isSquare())
  cout<<"it is a square";
  cout<<"Area"<<r1.area()<<endl;
}

    Rectangle::Rectangle()
    {
         length=1;
         breadth=1;
    }
    Rectangle::Rectangle(int l,int b)
    {
        length=1;
        breadth=1;
    }
    Rectangle::Rectangle(Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
     }
     bool Rectangle::isSquare()
     {
          return length==breadth;
        
         
     }
      Rectangle:: ~Rectangle()
      {
          cout<<"rectangle destroyed";
      }
     



