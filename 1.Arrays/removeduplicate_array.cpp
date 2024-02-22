#include <iostream>
using namespace std;
#include<math.h>

void remdup(int arr[],int size){
    int res=1;
    for(int i= 1;i<size;i++){
        if(arr[i-1]!=arr[i]){
            arr[res]=arr[i];
            res++;
        }
        
    }
    for(int i= 0;i<res;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[]={1,2,2,2,2,3,3,3,4,5};
    int size= sizeof(arr)/sizeof(int);
    remdup(arr,size);   
    return 0;
}