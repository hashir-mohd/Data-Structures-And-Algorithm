#include <iostream>
using namespace std;
#include<limits.h>

void maxdiff(int arr[],int n){
    int res= arr[1]-arr[0];
    int mini=min(arr[1],arr[0]);
    for(int i = 0;i < n ; i++){
        if((arr[i]-mini)>res){
            mini=min(arr[i],mini);
            res=arr[i]-mini;
        }

    }
    cout << res << endl;
}
int main(){
    int arr[]={2,3,10,6,4,8,1};
    int n= sizeof(arr)/sizeof(int);
    maxdiff(arr,n);
  
    return 0;
}