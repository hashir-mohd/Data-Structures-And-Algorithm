#include <iostream>
using namespace std;

void insert(int arr[],int size,int x,int pos){
     
    int idx= pos -1;    
    for ( int i=size-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    for (int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

}

void print(int arr[], int n){
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[7]={21,27,30,45,23};
    print(arr,6);
    cout << endl;
    insert(arr,7,345,4);
    cout << endl;
    print(arr,7);
    return 0;
}