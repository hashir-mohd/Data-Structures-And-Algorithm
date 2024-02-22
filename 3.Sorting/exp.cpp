#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void hoares_partition(int arr[],int l,int h){
    int pivot=arr[l];
    int i=l-1,j=h+1;
    while(true){
        do{i++;}
        while(arr[i]<pivot);
        do{j--;}
        while(arr[j]>pivot);
        if(i>=j) return ;
        swap(arr[i],arr[j]);

    }
}

int main(){
    int arr[7]={30,25,20,40,60,50,2}; 
    // int b[5]={10,20,20,80,80};
    int m=sizeof(arr)/sizeof(arr[0]);
	// int n=sizeof(b)/sizeof(b[0]);
    hoares_partition(arr,0,6);
    for(int i=0; i<m;i++){
        cout << arr[i]<< " ";
    }
   
}