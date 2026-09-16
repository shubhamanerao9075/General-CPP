#include<iostream>
#include<string>
using namespace std;
 
class Parent{
    public:
    void show(){
        cout<<"Parent class show\n";
    }
    void show(string print){
        cout<<print;
    }
};
class Child :public Parent{
    public:
    void show(){
        cout<<"Child class show\n";
    }
};
 
int main(){
    Child c1;
    c1.show();//Function Overriding it ignored that is overrided the show function of parent class and used function in child class 
    Parent p1;
    p1.show();//this is function overloading means both functions are called according to their input type
    p1.show("print");//funcyion overloading is compile time polymorphism
    

    return 0;
}
