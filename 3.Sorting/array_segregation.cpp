#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void array_segregation(int arr[],int m){
    int counter=0;
    for(int i=0;i<m;i++){
        if(arr[i]==0){
            swap(arr[counter],arr[i]);
            counter++;
        }
        
        
    }
}

int main(){
    int arr[]={0,0,0,1,0,1,1,0,1}; 
    int m=sizeof(arr)/sizeof(arr[0]);
    array_segregation(arr,m);
    for(int i=0; i<m;i++){
        cout << arr[i]<< " ";
        }
}