#include<iostream>
#include<climits>
using namespace std;

int main(){
 int arr[]={2,3,5,1,0,7,6,8};
 int min=INT_MAX;
 for(int i=0;i<8;i++){
    if(min>arr[i]&&arr[i]!=0){
        min=arr[i];

    }
 }
 cout<<min;

 return 0;
}