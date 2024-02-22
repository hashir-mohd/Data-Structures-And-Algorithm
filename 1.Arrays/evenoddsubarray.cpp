#include <iostream>
using namespace std;
#include<limits.h>
// answer is coming 1 less than the actual answer

int evenodd(int arr[],int n){
    int count =1;
    int res=1;
    for(int i=1; i<n-1;i++){
        if((arr[i-1]-arr[i])%2== (1 || -1)){
            count ++;
            res=max(res,count);
        }
        else{
            count=1;
        }
    }
    return res;

}
int main(){
    int arr[]={5,10,20,6,3,8};
    int n= sizeof(arr)/sizeof(int);
    cout << evenodd(arr,n) << endl;
//    cout << -5%2<< endl;
  
    return 0;
}