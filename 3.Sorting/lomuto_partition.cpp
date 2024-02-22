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

int main(){
    int a[]={3,4,1,9,7,9}; 
    // int b[5]={10,20,20,80,80};
    int m=sizeof(a)/sizeof(a[0]);
	// int n=sizeof(b)/sizeof(b[0]);
    cout << "pivot is :" << a[m-1]<< endl;

    cout << "pivot index is : " <<lomuto_partition(a,0,m-1) << endl;
    for(int i=0; i<m;i++){
        cout << a[i]<< " ";
    }
   
}