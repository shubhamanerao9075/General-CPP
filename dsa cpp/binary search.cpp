#include<iostream>
using namespace std;
 
int binarysearch(int *arr,int n,int key){
      int st=0;
    int end=n-1;
    
    while(st<=end){
      int  mid=(st+end)/2;
      if(arr[mid]==key){
        return mid;
      }
      else if(arr[mid]<key){
         st=mid+1;
      }
      else{
        end=mid-1;

      }
    
    }
    return -1;
}
int main(){
    int arr[100];
    int n;
    int key;
    cout<<"Enter the size of array:\n";
    cin>>n;
    cout<<"Enter the elemenets of array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the elemenet to find:\n";
    cin>>key;
    cout<<binarysearch(arr,n,key);
    return 0;
}
