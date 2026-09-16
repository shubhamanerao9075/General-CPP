#include<iostream>
#include<string>
using namespace std;

void counter (){
    int count =0;
    count++;
    cout<<"\nCount : "<<count;
}
void print (){
    static int count =0;
    count++;
    cout<<"\nCount : "<<count;
}

// Static Keyword

// . Static Variables

// Variables declared as static in a function are created & initialised once for the lifetime of the
// program. //in Function

// Static variables in a class are created & initialised once. They are shared by all the
// obiects of the class. //in Class

class Example{
    public:
    static int x;
    int y=0;

};
 
int Example :: x=0;//static is initialised outside the class 
int main(){
    //Normal
    counter();
    counter();
    counter();
    counter();
    //Static
    print ();
    print ();
    print ();
    print ();
    //Object
 Example eg1;
 Example eg2;
 Example eg3;
 //Static
 cout<<eg1.x++<<endl;
 cout<<eg2.x++<<endl;
 cout<<eg3.x++<<endl;
 //Normal
 cout<<eg1.y++<<endl;
 cout<<eg2.y++<<endl;
 cout<<eg3.y++<<endl;

    return 0;
}