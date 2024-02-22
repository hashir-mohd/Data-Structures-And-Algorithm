#include <iostream>
using namespace std;
#include<math.h>

void largest(int arr[],int size){
    int maxi=arr[0];
    int idx=0;
    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            idx=i;
        }
        
    }
    cout << maxi <<endl << idx<< endl;
}

int main(){
    int arr[]={11,23,31,31,3,4,4,7,585,8,99};
    int size= sizeof(arr)/sizeof(int);
    largest(arr,size);
    return 0;
}