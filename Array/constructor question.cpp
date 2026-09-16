#include<iostream>
#include<string>
using namespace std;

class User{
    int id;
    string password;

  public:
    string username;

    User(int id){
        this->id=id;

    }
    void setpassword(string password){
     this->password=password;
    }

    string getpassword(){
        return password;
    }
};

int main(){
    User u1(061);
    u1.username="shubham";
    u1.setpassword("shubham@2006");
    cout<<u1.username<<"\n";
    cout<<u1.getpassword();

}