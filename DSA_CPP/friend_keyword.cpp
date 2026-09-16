#include<iostream>
#include<string>
using namespace std;

// Friend Class & Function

// A friend class or a friend function can access private and protected members of other classes in
// which it is declared as a friend.

class A{
    private:
    string secret = "Secret Data";
    friend class B;
    friend void revealsecret(A &obj);
};

class B{
public:
 void showsecret(A &obj){
    cout<<obj.secret<<endl;
 }
};

void revealsecret(A &obj){
    cout<<obj.secret<<endl;
}

int main(){
    A a1;
    B b1;
    b1.showsecret(a1);
    revealsecret(a1);

    return 0;
}