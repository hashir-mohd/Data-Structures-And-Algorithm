#include <iostream>
using namespace std;
#include<limits.h>

void subsum(int arr[],int n){
    int res=arr[0];
    int curr=0;
    for(int i=0 ; i<n ; i++){
        if((arr[i]+ curr)<0){
            res=max(curr,res);
            curr=0;
        }
        else{
            curr=curr+arr[i];   
        }
    }
    res=max(curr,res);
    cout << res << endl;
}
int main(){
    int arr[]={-6,-1,-8};
    int n= sizeof(arr)/sizeof(int);
    subsum(arr,n);
  
    return 0;
}