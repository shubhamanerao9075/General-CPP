#include <iostream>
using namespace std;
void profit(int *ar){
    
    int buy=0;
   

    for(int i=0;i<6;i++){
        if(ar[i]<ar[buy]){
            
              buy=i;
        }
        
    } 
     int sell=0;
    for(int j=buy+1;j<6;j++){
        if(ar[j]>sell){
            sell=ar[j];
        
        }

    }
    if(sell-ar[buy]>0) {
    cout<<sell-ar[buy];
    }
    else{
        cout<< 0;
    }
}

int main(){
   
    int arr[6]={7,6,4,3,1,0};
    // int buy =arr[0];
    // int sell=arr[0];
    // for(int i;i,n)
    
    
    profit(arr);
    return 0;
}

