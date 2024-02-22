#include <iostream>
using namespace std;
#include<limits.h>

void majority(int arr[],int n){
    int fre =1;
    int i=1;
    for(i =1;i<n;i++){
        for(i;i<n ; i++){
            if(arr[i]==arr[i-1]){
                fre++;
            }
        }
        cout << arr[i-1] << " " << fre << endl;
        fre=1;
    }
    if (n==1 ||arr[n-1] !=arr[n-2]){
        cout << arr[n-1] << " " << 1 << endl;
    }
}
int main(){
    int arr[]={1,1,2,3,3,4,4,4,5,5,5,5};
    int n= sizeof(arr)/sizeof(int);
    majority(arr,n);
  
    return 0;
}