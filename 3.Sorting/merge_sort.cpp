#include <iostream>
using namespace std;

void merge_function(int arr[],int low, int mid, int high){

    int n = mid-low+1;
    int m = high-mid;
    int left[n] ;
    int right[m] ;
    for(int i=0;i<n;i++){
        left[i]=arr[low+i];
    }
    for(int j=0;j<m;j++){
        right[j]=arr[n+j];
    }
    int i=0,j=0,index=0;
    while(i<n && j<m){
        if(left[i]<=right[j]){arr[index]=left[i];i++;index++;}
        else
        {
            arr[index]= right[j]; j++; index++;
        }
    }
    while (i<n)
    {
        arr[index]=left[i];
        index++;
        i++;
    }
    while (j<m)
    {
        arr[index]=right[j];
        j++;
        index++;
    }
    
    
}

void merge_sort(int arr[],int l, int h){
    if (l<h)
    {
        int m=l+(h-l)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,h);
        merge_function(arr,l,m,h);
    }
    
}

int main(){
    int arr[5]={10,5,30,15,7};  
    merge_sort(arr,0,4);
    for(int i =0;i<5;i++){
        cout << arr[i] << " ";
    }
}