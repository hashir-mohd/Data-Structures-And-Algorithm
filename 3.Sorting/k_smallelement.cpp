#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lomuto_partition(int a[],int l,int h){
    int pivot=a[h];
    int i=l-1;
    for (int j = l; j < h; j++)
    {
        if(a[j]<pivot){i++;swap(a[j],a[i]);}

    }
    swap(a[i+1],a[h]);
    return (i+1); 
}

int Kth_smallest_element(int arr[],int k,int m){
    int l =0, r=m-1;
    while(l<=r){
        int p = lomuto_partition(arr,l,r);
        if(p==k-1){return arr[p];}
        if(p>=k){
            r=p-1;
            }
        else{
            l=p+1;
            }
        }
    return -1;
}

int main(){
    int arr[]={30,25,20,40,60,50,2}; 
    int m=sizeof(arr)/sizeof(arr[0]);
    cout << Kth_smallest_element(arr,7,m) << endl;
	
}