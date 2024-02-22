#include <iostream>
using namespace std;
#include<limits.h>
// answer is coming 1 less than the actual answer in even odd array

void windowslide(int arr[],int n){
   int k =3;
   int curr=0;
   for(int i=0;i<k;i++){
    curr+=arr[i];
   }
  int res= curr;
  
  for(int i=k;i<n;i++){
    if((curr+arr[i]-arr[i-k])>res){
        res=curr+arr[i]-arr[i-k];
    }
    else;
    curr=curr+arr[i]-arr[i-k];
  }

  cout << res << endl;
}

int main(){
    int arr[]={1,8,30,-5,20,7};
    int n= sizeof(arr)/sizeof(int);
    windowslide(arr,n);
  
    return 0;
}