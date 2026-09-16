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
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/4;
    int key=11;
    cout<<linearsearch(arr,n,key);
    return 0;
}