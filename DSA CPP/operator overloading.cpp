#include<iostream>
#include<string>
using namespace std;
 
class Complex{
    int real;
    int img;

    public:
    Complex(int r,int i){
        real=r;
        img=i;
    }
    
    void Shownum(){
        cout<<real<<"+"<<img<<"i\n";

    }
    //operator overloading
    void operator + (Complex &obj){
        int resReal=this->real + obj.real;
        int resImg=this->img +obj.img;
        Complex c3(resReal,resImg);
        cout<<"res =" ;
        c3.Shownum();
    }

};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    c1.Shownum();
    c2.Shownum();
    c1 + c2;

    return 0;
}