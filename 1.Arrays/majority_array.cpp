#include <iostream>
using namespace std;
#include<limits.h>


int majority(int arr[],int n){
    
   for(int i=0;i<n;i++){
    int count;
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count ++;
        }
    }
    if (count >n/2){
        return i;
    }
   }
    
}
int main(){
    int arr[]={0,3,3,8,3,3,3};
    int n= sizeof(arr)/sizeof(int);
    cout << majority(arr,n)<< endl;
  
    return 0;
}