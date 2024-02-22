#include <iostream>
using namespace std;
#include<math.h>

int  largest(int arr[],int size){
    int maxi=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }   
    }
    return  maxi;
 }
int sec(int arr[], int size){
    int maxi = largest(arr,size);
    int sl=0;
    for(int i=0;i<size;i++){
        if( arr[i]!=maxi && arr[i]>=sl){
            sl=arr[i];
        }
    }
 return sl;
}
int main(){
    int arr[]={11111,2366,31,31,3,4,7,2,8,99};
    int size= sizeof(arr)/sizeof(int);
    cout << "largest is :" << largest(arr,size) << endl << "second largest is : "<<sec(arr,size) << endl;
    return 0;
}