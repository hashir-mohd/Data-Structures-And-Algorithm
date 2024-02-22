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

void lomuto_quicksort(int arr[],int l,int h){
    if(l<h){
        int p = lomuto_partition(arr,l,h);
        lomuto_quicksort(arr,l,p-1);
        lomuto_quicksort(arr,p+1,h);
    }
}

int main(){
    int arr[]={10,9,8,7,6,5,4,2,1,3}; 
    int m=sizeof(arr)/sizeof(arr[0]);
	lomuto_quicksort(arr,0,m-1);
    for(int i=0; i<m;i++){
        cout << arr[i]<< " ";
    }
}