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

void hoares_quicksort(int arr[],int l, int h){
    if(l<h){
        int p=hoares_partition(arr,l,h);
        hoares_quicksort(arr,l,p);
        hoares_quicksort(arr,p+1,h);
    }
}

int main(){
    int arr[7]={30,25,20,40,60,12,45}; 
    int m=sizeof(arr)/sizeof(arr[0]);
    hoares_quicksort(arr,0,6);
    for(int i=0; i<m;i++){
        cout << arr[i]<< " ";
    }
   
}