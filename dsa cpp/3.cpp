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
    int copyarr[n];
    for(int i=0;i<n;i++){
        int j=0;
         j= n-1-i;
        copyarr[j]=arr[i];
    }
   array(copyarr,n);
    return 0;
}