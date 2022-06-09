#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;            
      int inches;           
      
   public:
      void getdata()
      {
          cin>>feet>>inches;
      }
      void operator ==(Distance d)
      {
         if (feet == d.feet && inches == d.inches)
            cout<<"BOTH DISTANCES ARE EQUAL"<<endl;
    
      }
      
    
      void operator <( Distance d) {
         if(feet < d.feet)
        {    
            cout<<"SECOND ONE IS GREATER"<<endl;
         }
         else if (feet > d.feet){
            cout<<"FIRST ONE IS GREATER"<<endl;
         }
        
         
         
      }
};

int main() {
   Distance D1, D2;
   D1.getdata();
   D2.getdata();
   D1==D2;
   D1<D2;

     
   return 0;
}