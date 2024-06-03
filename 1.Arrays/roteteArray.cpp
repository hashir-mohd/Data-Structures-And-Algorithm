#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void rotateArray(int arr[],int n,int d){
    reverse(arr,arr+(n-d));
    reverse(arr+(n-d),arr+n);
    reverse(arr,arr+n);
}

void printArray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    rotateArray(arr,7,2);
    printArray(arr,7);
}


