#include <iostream>
using namespace std;
#include<math.h>

void reverse(int arr[], int size){
    cout << " this is a new array which is reverse of the given array :" << endl;
    for(int i=size-1;i>=0;i--){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

void alter(int arr[], int size){
    for (int i=0;i<= (size/2); i++){
        int temp= arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1] = temp;    
    }
   
     for(int j=0;j<size;j++){
       cout << arr[j] << " ";
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int size= sizeof(arr)/sizeof(int);
    reverse(arr,size);
    cout << " this is the same array which is modified :" << endl;
    
    alter(arr,size);
    cout << endl;
    
    
    return 0;
}