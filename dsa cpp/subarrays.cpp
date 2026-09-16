#include<iostream>
using namespace std;

void printsubarrays(int *arr,int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            
                cout<<"("<<start<<","<<end<<")";
            
            
        }
        cout<<endl;
    }
}

int main(){
int arr[]={1,2,3,4,5,6};
int n=sizeof(arr)/sizeof(int);
printsubarrays(arr,n);
return 0;

}