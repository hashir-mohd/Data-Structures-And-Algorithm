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
    for(int i =0;i<index;i++){
        cout << arr[i] << " ";
    }
    
}

int main(){
    int arr[2]={4,5};  
    merge_function(arr,0,0,1);
}


