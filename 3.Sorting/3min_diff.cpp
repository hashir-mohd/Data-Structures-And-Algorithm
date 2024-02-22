#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int min_diff(int arr[],int s,int m){
    if(m>s){return -1;}
    sort(arr,arr+s);
    int res=arr[m-1]-arr[0];
    for(int i=0;i+m-1<s;i++){
        res=min(res,arr[i+m-1]-arr[i]);
    }
    return res;
}

int main(){
    int arr[]={7,3,2,12,4,9,56}; 
    int m=sizeof(arr)/sizeof(arr[0]);
    cout << min_diff(arr,m,3) << endl;
    
}