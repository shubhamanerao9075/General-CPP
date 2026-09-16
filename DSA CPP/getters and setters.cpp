#include<iostream>
#include<string>
using namespace std;

class Student {
string name;
float cgpa;

public:
 
void setName(string nameVal){
name=nameVal;
}

void setCgpa(float cgpaVal){
cgpa=cgpaVal;
}

string getName(){
    return name;
}

float getCgpa(){
    return cgpa;
}
};


int main(){
    Student s1;
    s1.setName("shubham");
    s1.setCgpa(9.2);
    cout<<s1.getCgpa()<<" \n"<<s1.getName();

    Student s2;
    s2.setName("alex");
    s2.setCgpa(8.0);
    cout<<"\n"<<s2.getCgpa()<<" \n"<<s2.getName();

    return 0;
}