#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge_overlap(int arr[],int m){
    sort(arr,arr+m);

}

int main(){
    int arr[]={{7,9},{6,10},{4,5},{1,3},{2,4}}; 
    int m=sizeof(arr)/sizeof(arr[0]);
    merge_overlap(arr,m);
    
}