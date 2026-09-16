#include<iostream>
#include<string>
using namespace std;

class Car{
  
   public:
    string  name;
    string colour;
    int *mileage;
    
    
    Car(){
        cout<<"Non parameterised constructor.\n";

    }
    Car(string name,string colour){
        cout<<"Parameterised constructor.\n";
        this->name = name;
        this->colour = colour;
        mileage=new int;
        *mileage=12;

    }
    //For shallow constructor;
    Car(Car &original){
        cout<<"Custom copy constructor\n";
        name=original.name;
        colour=original.colour;
       mileage=original.mileage;//if this removed and next 2 lines added then it is deep copy if this line is remain at it is it will not effect in deep copy so removing it is best option but not neccesary
       // mileage=new int;
        //*mileage=*original.mileage;

    }
   



};


int main(){
 Car c0;
 Car c1("maruti 800","white");
 cout<<c1.name<<"\n";
 cout<<c1.colour<<"\n";
 cout<<*c1.mileage<<"\n";

 Car c2(c1); //custom copy constructor
 cout<<c2.name<<"\n";
 cout<<c2.colour<<"\n";
 cout<<*c2.mileage<<"\n";
  *c2.mileage=10;
 cout<<*c1.mileage<<"\n";
 //if modify to c2 it autmatically modifies c1 because it is shallow 
 //shallow modifies original rather than making new
 return 0;
}
// Shallow copy copies references to original array. But array remains same.
// Deep copy created a brand new copy of the array.

// Compiler generally creates a shallow copy for array.

// We need to define own copy constructor when deep copy is needed i.e. when class contains
// pointers to dynamically allocated memory.