#include <iostream>
using namespace std;
// #include<math.h>

void movezero(int arr[],int size){
    int idx=0;
    for(int i =0;i<size;i++){
        if(arr[i]!=0){
            swap(arr[idx],arr[i]);
            idx++;
        }
    }
    for(int i =0;i<size;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[]={0,1,0,234,0,2,3,4,0,5};
    int size= sizeof(arr)/sizeof(int);
    movezero(arr,size);
  
    return 0;
}