#include <iostream>
using namespace std;

class Vehicle
{
    int mileage, price;
    public:
    Vehicle(int m, int p)
    {
        mileage= m;
        price= p;
    }
    Vehicle disp_v()
    {
        cout<<"Mileage : "<<mileage<<endl;
        cout<<"Price : "<<price<<endl;
        return *this;
    }
};

class Car: public Vehicle
{
    int own_Cost, warranty, seat_Capacity;
    string fuel_Type;
    public:
    Car(int m, int p, int oC, int w, int sC, string fT): Vehicle(m, p)
    {
        own_Cost= oC;
        warranty= w;
        seat_Capacity= sC;
        fuel_Type= fT;
    }
    Car disp_c()
    {
        cout<<"Ownersip cost : "<<own_Cost<<endl;
        cout<<"Warranty : "<<warranty<<endl;
        cout<<"Seating capacity : "<<seat_Capacity<<endl;
        cout<<"Fuel type : "<<fuel_Type<<endl;
        return *this;
    }	 	  	 	 	 		    	      	  	        	 	
};

class Bike: public Vehicle
{
    int num_Cylinders, num_Gears;
    float tank_Size;
    string cool_Type, wheel_Type;
    public:
    Bike(int m, int p, int nC, int nG, string cT, string wT, int tS): Vehicle(m, p)
    {
        num_Cylinders= nC;
        num_Gears= nG;
        cool_Type= cT;
        wheel_Type= wT;
        tank_Size= tS;
    }
    Bike disp_b()
    {
        cout<<"no. of cyclinders : "<<num_Cylinders<<endl;
        cout<<"No. of gears  : "<<num_Gears<<endl;
        cout<<"Cooling type : "<<cool_Type<<endl;
        cout<<"Wheel type : "<<wheel_Type<<endl;
        cout<<"Tank size  : "<<tank_Size<<endl;
        return *this;
    }
};

class Ford: public Car
{
    string model;
    public:
    Ford(int m, int p, int oC, int w, int sC, string fT, string mod): Car(m, p, oC, w, sC, fT)
    {
        model= mod;
    }
    Ford disp_f()
    {	 	  	 	 	 		    	      	  	        	 	
        cout<<"Model type : "<<model<<endl;
        return *this;
    }
};

class Audi: public Car
{
    string model;
    public:
    Audi(int m, int p, int oC, int w, int sC, string fT, string mod): Car(m, p, oC, w, sC, fT)
    {
        model= mod;
    }
    Audi disp_a()
    {
        cout<<"Model type : "<<model<<endl;
        return *this;
    }
};

class Bajaj: public Bike
{
    string make;
    public:
    Bajaj(int m, int p, int nC, int nG, string cT, string wT, int tS, string mak): Bike(m, p, nC, nG, cT, wT, tS)
    {
        make= mak;
    }
    Bajaj disp_baj()
    {
        cout<<"Make type : "<<make<<endl;
        return *this;
    }
};

class TVS: public Bike
{	 	  	 	 	 		    	      	  	        	 	
    string make;
    public:
    TVS(int m, int p, int nC, int nG, string cT, string wT, int tS, string mak): Bike(m, p, nC, nG, cT, wT, tS)
    {
        make= mak;
    }
    TVS disp_t()
    {
        cout<<"Make type : "<<make<<endl;
        return *this;
    }
};

int main()
{
    Ford f(25, 670, 790, 3, 5, "Diesel", "EcoSport");
    Audi a(20, 500, 600, 5, 7, "Petrol", "Q2");
    Bajaj b(15, 200, 3, 4, "Air", "Alloys", 20.5, "Honda");
    TVS t(12, 250, 4, 3, "Liquid", "Spokes", 10.5, "Activa");
    
    f.disp_f().disp_c().disp_v();
    a.disp_a().disp_c().disp_v();
    b.disp_baj().disp_v();
    b.disp_b();
    t.disp_t().disp_v();
    t.disp_b();
}	 	  	 