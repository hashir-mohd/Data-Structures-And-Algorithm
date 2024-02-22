#include <iostream>
using namespace std;
#include<limits.h>

void maxones(int arr[],int n){
    int res=0;
    int curr=0;
    for(int i =1;i<n;i++){
      if (arr[i]==0){
        curr=0;
      }
      else{
        curr++;
        res=max(curr,res);  
        
      }
    }
    cout << res << endl;
}
int main(){
    int arr[]={0,0,1,1,0,1,1,1,1,0};
    int n= sizeof(arr)/sizeof(int);
    maxones(arr,n);
  
    return 0;
}