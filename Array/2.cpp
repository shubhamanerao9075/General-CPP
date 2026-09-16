#include<iostream>
using namespace std;

int linearsearch(int *arr,int n,int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){ 
            return i;
        }
        
    }
     return -1;
}

int main(){
    int arr[100];
    int n;
    int key;
    cout<<"Enter the number elements:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    cout<<"Enter element to find:";
    cin>>key;
    cout<<linearsearch(arr,n,key);
    return 0;
}