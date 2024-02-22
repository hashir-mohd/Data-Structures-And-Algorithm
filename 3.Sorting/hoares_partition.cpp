#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int hoares_partition(int arr[],int l,int h){
    int pivot=arr[l];
    int i=l-1,j=h+1;
    while(true){
        do{i++;}
        while(arr[i]<pivot);
        do{j--;}
        while(arr[j]>pivot);
        if(i>=j) return j ;
        
        swap(arr[i],arr[j]);

    }
}

int main(){
    int arr[7]={30,25,20,40,60,12,45}; 
    // int b[5]={10,20,20,80,80};
    int m=sizeof(arr)/sizeof(arr[0]);
	// int n=sizeof(b)/sizeof(b[0]);
    cout << "pivot is :" << arr[0]<< endl;

    cout << "pivot index is : ";
    cout <<hoares_partition(arr,0,6);
    cout <<endl;
    for(int i=0; i<m;i++){
        cout << arr[i]<< " ";
    }
   
}