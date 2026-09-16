#include<iostream>
#include<string>
using namespace std;
 
// Run Time Polymorphism
// · Virtual Functions

// · Virtual functions are Dynamic in nature.

// . Defined by the keyword "virtual" inside a base class and are always declared with a base

// class and overridden in a child class.

// . A virtual function is called during Runtime

class Parent{
    public:

 virtual void hello(){
    cout<<"Parent hello";
 }
};

class Child:public Parent{
    public:

 void hello(){
    cout<<"Child hello";
 }
};

int main(){
Child c1;
Parent *ptr;
ptr=&c1;//runtime binding
ptr->hello();//Virtual function

return 0;
}