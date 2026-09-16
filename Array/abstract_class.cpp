#include<iostream>
#include<string>
using namespace std;

//Abstraction

// Abstract Classes

// . Abstract classes are used to provide a base class from which other classes can be derived.

// . They cannot be instantiated and are meant to be inherited.Means objects are not created for abstract class

// . Abstract classes are typically used to define an interface for derived classes.

// Pure Virtual Function

// A pure virtual function (or abstract function) is a virtual function with no definition/logic.
// It is declared by assigning O at the time of declaration.

// virtual void func() = 0;

class Shape{
    public:
  virtual void draw()=0;//pure virtual function or abstract funtion
};

class Circle :public Shape{
    public:
    void draw(){
   cout<<"Draw Circle\n";
    }
};

class Square:public Shape{
    public:
    void draw(){
   cout<<"Draw Square\n";     
    }
};

int main(){
    Circle c1;
    c1.draw();

    Square s1;
    s1.draw();

    // Shape k1; this not possible because it is creating base class object
    // k1.draw();

    return 0;
}
