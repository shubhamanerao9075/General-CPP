#include <iostream>
using namespace std;
void maxprofit(int *arr,int n){
    int buy=arr[0];
    int profit=0;
    for(int i=0;i<n;i++){
        buy=min(buy,arr[i]);
        profit=max(profit,arr[i]-buy);
    }

    cout<<profit;

    
}
int main(){
      int arr[6]={7,6,4,3,1,5};
  
    
    
    maxprofit(arr,6);
    return 0;
}

