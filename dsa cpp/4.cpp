#include<iostream>
using namespace std;
void array(int *arr,int n){
    for(int i=0;i<n;i++){
     cout<<arr[i]<<",";
    }
}
int main(){
    
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/4;
    int start=0,end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
       
        end--;
         start++;
    }
   array(arr,n);
    return 0;
}