#include<iostream>
#include<string>
using namespace std;

class Car{
    string  name;
    string colour;

   public:
    
    Car(){
        cout<<"Non parameterised constructor.\n";

    }
    Car(string name,string colour){
        cout<<"Parameterised constructor.\n";
        this->name = name;
        this->colour = colour;

    }
   
   

    string getname(){
        return name;
    }

   

    string getcolour(){
        return colour;
    }

};


int main(){
 Car c0;
 Car c1("maruti 800","white");
 cout<<c1.getname()<<"\n";
 cout<<c1.getcolour()<<"\n";

 return 0;
}